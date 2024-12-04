/*******************************************************************************
 * Copyright (C) 2022 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 ******************************************************************************/

//* [QPL_LOW_LEVEL_COMPRESSION_EXAMPLE] */

#include <iostream>
#include <vector>
#include <memory>

#include "qpl/qpl.h"
#include "examples_utils.hpp" // for argument parsing function

/**
 * @brief This example requires a command line argument to set the execution path. Valid values are `software_path`
 * and `hardware_path`.
 * In QPL, @ref qpl_path_software (`Software Path`) means that computations will be done with CPU.
 * Accelerator can be used instead of CPU. In this case, @ref qpl_path_hardware (`Hardware Path`) must be specified.
 * If there is no difference where calculations should be done, @ref qpl_path_auto (`Auto Path`) can be used to allow
 * the library to chose the path to execute. The Auto Path usage is not demonstrated by this example.
 *
 * @warning ---! Important !---
 * `Hardware Path` doesn't support all features declared for `Software Path`
 *
 */
constexpr const uint32_t source_size = 4000;

auto main(int argc, char** argv) -> int {
    // Default to Software Path
    qpl_path_t execution_path = qpl_path_software;

    // Get path from input argument
    int parse_ret = parse_execution_path(argc, argv, &execution_path);
    if (parse_ret != 0) {
        return 1;
    }

    // Source and output containers
    std::vector<uint8_t> source(source_size, 5);
    for (size_t i = 0; i < source_size; ++i) {
        source[i] = static_cast<uint8_t>((i * 31 + 7) % 256); // Arbitrary calculation
    }
    std::vector<uint8_t> destination(source_size / 2, 4);
    std::vector<uint8_t> reference(source_size, 7);

    // Shared buffer for job initialization
    std::unique_ptr<uint8_t[]> job_buffer;
    qpl_job *job;
    uint32_t size = 0;
    qpl_status status;

    // Initialize the shared job buffer
    status = qpl_get_job_size(execution_path, &size);
    if (status != QPL_STS_OK) {
        std::cout << "Error " << status << " getting job size.\n";
        return 1;
    }

    job_buffer = std::make_unique<uint8_t[]>(size);
    job = reinterpret_cast<qpl_job *>(job_buffer.get());
    status = qpl_init_job(execution_path, job);
    if (status != QPL_STS_OK) {
        std::cout << "Error " << status << " initializing job.\n";
        return 1;
    }

    // Compression in 4 chunks
    size_t chunk_size = source.size() / 4;
    uint32_t compressed_size[4] = {0};

    for (int i = 0; i < 4; i++) {
        job->op            = qpl_op_compress;
        job->level         = qpl_default_level;
        job->next_in_ptr   = source.data() + i * chunk_size;
        job->next_out_ptr  = destination.data() + i * (chunk_size / 2); // Assume compression reduces size by half
        job->available_in  = static_cast<uint32_t>(chunk_size);
        job->available_out = static_cast<uint32_t>(destination.size() / 4);
        job->flags         = QPL_FLAG_FIRST | QPL_FLAG_LAST | QPL_FLAG_DYNAMIC_HUFFMAN | QPL_FLAG_OMIT_VERIFY;

        status = qpl_execute_job(job);
        if (status != QPL_STS_OK) {
            std::cout << "Error " << status << " during compression for chunk " << i << ".\n";
            return 1;
        }
        compressed_size[i] = job->total_out;
    }

    // Decompression in 4 chunks using the same job buffer
    for (int i = 0; i < 4; i++) {
        job->op            = qpl_op_decompress;
        job->next_in_ptr   = destination.data() + i * (chunk_size / 2); // Offset to compressed chunk
        job->next_out_ptr  = reference.data() + i * chunk_size;         // Offset to decompressed chunk
        job->available_in  = compressed_size[i];
        job->available_out = static_cast<uint32_t>(chunk_size);
        job->flags         = QPL_FLAG_FIRST | QPL_FLAG_LAST;

        status = qpl_execute_job(job);
        if (status != QPL_STS_OK) {
            std::cout << "Error " << status << " during decompression for chunk " << i << ".\n";
            return 1;
        }
    }

    // Finalize the shared job
    status = qpl_fini_job(job);
    if (status != QPL_STS_OK) {
        std::cout << "Error " << status << " finalizing job.\n";
        return 1;
    }

    // Verify decompressed data
    for (size_t i = 0; i < source.size(); i++) {
        if (source[i] != reference[i]) {
            std::cout << "Content wasn't successfully compressed and decompressed.\n";
            return 1;
        }
    }

    std::cout << "Content was successfully compressed and decompressed using shared job buffer and 4 chunks." << std::endl;
    std::cout << "Input size: " << source.size() << ", compression ratio: "
              << (float)source.size() / (float)(compressed_size[0] + compressed_size[1] + compressed_size[2] + compressed_size[3]) << ".\n";

    return 0;
}


//* [QPL_LOW_LEVEL_COMPRESSION_EXAMPLE] */
