# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/ignacio/ibex_revmono

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ignacio/ibex_revmono

# Include any dependencies generated for this target.
include tests/CMakeFiles/TestInHC4Revise.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/TestInHC4Revise.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/TestInHC4Revise.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/TestInHC4Revise.dir/flags.make

tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o: tests/CMakeFiles/TestInHC4Revise.dir/flags.make
tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o: tests/TestInHC4Revise.cpp
tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o: tests/CMakeFiles/TestInHC4Revise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o -MF CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o.d -o CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o -c /home/ignacio/ibex_revmono/tests/TestInHC4Revise.cpp

tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/TestInHC4Revise.cpp > CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.i

tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/TestInHC4Revise.cpp -o CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.s

# Object files for target TestInHC4Revise
TestInHC4Revise_OBJECTS = \
"CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o"

# External object files for target TestInHC4Revise
TestInHC4Revise_EXTERNAL_OBJECTS =

tests/TestInHC4Revise: tests/CMakeFiles/TestInHC4Revise.dir/TestInHC4Revise.cpp.o
tests/TestInHC4Revise: tests/CMakeFiles/TestInHC4Revise.dir/build.make
tests/TestInHC4Revise: tests/libtest_common.a
tests/TestInHC4Revise: src/libibex.a
tests/TestInHC4Revise: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgaol.a
tests/TestInHC4Revise: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgdtoa.a
tests/TestInHC4Revise: interval_lib_wrapper/gaol/mathlib-2.1.0-build/libultim.a
tests/TestInHC4Revise: /usr/lib/x86_64-linux-gnu/libcppunit.so
tests/TestInHC4Revise: tests/CMakeFiles/TestInHC4Revise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestInHC4Revise"
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestInHC4Revise.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/TestInHC4Revise.dir/build: tests/TestInHC4Revise
.PHONY : tests/CMakeFiles/TestInHC4Revise.dir/build

tests/CMakeFiles/TestInHC4Revise.dir/clean:
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestInHC4Revise.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/TestInHC4Revise.dir/clean

tests/CMakeFiles/TestInHC4Revise.dir/depend:
	cd /home/ignacio/ibex_revmono && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono/tests/CMakeFiles/TestInHC4Revise.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/TestInHC4Revise.dir/depend
