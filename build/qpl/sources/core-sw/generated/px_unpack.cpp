#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
unpack_table_t px_unpack_table = {
	px_qplc_unpack_1u8u,
	px_qplc_unpack_2u8u,
	px_qplc_unpack_3u8u,
	px_qplc_unpack_4u8u,
	px_qplc_unpack_5u8u,
	px_qplc_unpack_6u8u,
	px_qplc_unpack_7u8u,
	px_qplc_unpack_8u8u,
	px_qplc_unpack_9u16u,
	px_qplc_unpack_10u16u,
	px_qplc_unpack_11u16u,
	px_qplc_unpack_12u16u,
	px_qplc_unpack_13u16u,
	px_qplc_unpack_14u16u,
	px_qplc_unpack_15u16u,
	px_qplc_unpack_16u16u,
	px_qplc_unpack_17u32u,
	px_qplc_unpack_18u32u,
	px_qplc_unpack_19u32u,
	px_qplc_unpack_20u32u,
	px_qplc_unpack_21u32u,
	px_qplc_unpack_22u32u,
	px_qplc_unpack_23u32u,
	px_qplc_unpack_24u32u,
	px_qplc_unpack_25u32u,
	px_qplc_unpack_26u32u,
	px_qplc_unpack_27u32u,
	px_qplc_unpack_28u32u,
	px_qplc_unpack_29u32u,
	px_qplc_unpack_30u32u,
	px_qplc_unpack_31u32u,
	px_qplc_unpack_32u32u,
	px_qplc_unpack_be_1u8u,
	px_qplc_unpack_be_2u8u,
	px_qplc_unpack_be_3u8u,
	px_qplc_unpack_be_4u8u,
	px_qplc_unpack_be_5u8u,
	px_qplc_unpack_be_6u8u,
	px_qplc_unpack_be_7u8u,
	px_qplc_unpack_be_8u8u,
	px_qplc_unpack_be_9u16u,
	px_qplc_unpack_be_10u16u,
	px_qplc_unpack_be_11u16u,
	px_qplc_unpack_be_12u16u,
	px_qplc_unpack_be_13u16u,
	px_qplc_unpack_be_14u16u,
	px_qplc_unpack_be_15u16u,
	px_qplc_unpack_be_16u16u,
	px_qplc_unpack_be_17u32u,
	px_qplc_unpack_be_18u32u,
	px_qplc_unpack_be_19u32u,
	px_qplc_unpack_be_20u32u,
	px_qplc_unpack_be_21u32u,
	px_qplc_unpack_be_22u32u,
	px_qplc_unpack_be_23u32u,
	px_qplc_unpack_be_24u32u,
	px_qplc_unpack_be_25u32u,
	px_qplc_unpack_be_26u32u,
	px_qplc_unpack_be_27u32u,
	px_qplc_unpack_be_28u32u,
	px_qplc_unpack_be_29u32u,
	px_qplc_unpack_be_30u32u,
	px_qplc_unpack_be_31u32u,
	px_qplc_unpack_be_32u32u};
}
