# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chenqh23/IAA_benchmarking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chenqh23/IAA_benchmarking/build

# Include any dependencies generated for this target.
include qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/compiler_depend.make

# Include the progress variables for this target.
include qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/progress.make

# Include the compile flags for this target's objects.
include qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/flags.make

qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o: qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/flags.make
qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o: /home/chenqh23/IAA_benchmarking/qpl/examples/low-level-api/crc64_example.cpp
qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o: qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/chenqh23/IAA_benchmarking/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o"
	cd /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o -MF CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o.d -o CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o -c /home/chenqh23/IAA_benchmarking/qpl/examples/low-level-api/crc64_example.cpp

qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.i"
	cd /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chenqh23/IAA_benchmarking/qpl/examples/low-level-api/crc64_example.cpp > CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.i

qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.s"
	cd /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chenqh23/IAA_benchmarking/qpl/examples/low-level-api/crc64_example.cpp -o CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.s

# Object files for target ll_cpp_crc64_example
ll_cpp_crc64_example_OBJECTS = \
"CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o"

# External object files for target ll_cpp_crc64_example
ll_cpp_crc64_example_EXTERNAL_OBJECTS =

qpl/examples/low-level-api/ll_cpp_crc64_example: qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/crc64_example.cpp.o
qpl/examples/low-level-api/ll_cpp_crc64_example: qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/build.make
qpl/examples/low-level-api/ll_cpp_crc64_example: qpl/sources/c_api/libqpl.a
qpl/examples/low-level-api/ll_cpp_crc64_example: qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/chenqh23/IAA_benchmarking/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ll_cpp_crc64_example"
	cd /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ll_cpp_crc64_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/build: qpl/examples/low-level-api/ll_cpp_crc64_example
.PHONY : qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/build

qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/clean:
	cd /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api && $(CMAKE_COMMAND) -P CMakeFiles/ll_cpp_crc64_example.dir/cmake_clean.cmake
.PHONY : qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/clean

qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/depend:
	cd /home/chenqh23/IAA_benchmarking/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chenqh23/IAA_benchmarking /home/chenqh23/IAA_benchmarking/qpl/examples/low-level-api /home/chenqh23/IAA_benchmarking/build /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api /home/chenqh23/IAA_benchmarking/build/qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : qpl/examples/low-level-api/CMakeFiles/ll_cpp_crc64_example.dir/depend

