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
include tests/CMakeFiles/TestEval.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/TestEval.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/TestEval.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/TestEval.dir/flags.make

tests/CMakeFiles/TestEval.dir/TestEval.cpp.o: tests/CMakeFiles/TestEval.dir/flags.make
tests/CMakeFiles/TestEval.dir/TestEval.cpp.o: tests/TestEval.cpp
tests/CMakeFiles/TestEval.dir/TestEval.cpp.o: tests/CMakeFiles/TestEval.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/TestEval.dir/TestEval.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/TestEval.dir/TestEval.cpp.o -MF CMakeFiles/TestEval.dir/TestEval.cpp.o.d -o CMakeFiles/TestEval.dir/TestEval.cpp.o -c /home/ignacio/ibex_revmono/tests/TestEval.cpp

tests/CMakeFiles/TestEval.dir/TestEval.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestEval.dir/TestEval.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/TestEval.cpp > CMakeFiles/TestEval.dir/TestEval.cpp.i

tests/CMakeFiles/TestEval.dir/TestEval.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestEval.dir/TestEval.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/TestEval.cpp -o CMakeFiles/TestEval.dir/TestEval.cpp.s

# Object files for target TestEval
TestEval_OBJECTS = \
"CMakeFiles/TestEval.dir/TestEval.cpp.o"

# External object files for target TestEval
TestEval_EXTERNAL_OBJECTS =

tests/TestEval: tests/CMakeFiles/TestEval.dir/TestEval.cpp.o
tests/TestEval: tests/CMakeFiles/TestEval.dir/build.make
tests/TestEval: tests/libtest_common.a
tests/TestEval: src/libibex.a
tests/TestEval: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgaol.a
tests/TestEval: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgdtoa.a
tests/TestEval: interval_lib_wrapper/gaol/mathlib-2.1.0-build/libultim.a
tests/TestEval: /usr/lib/x86_64-linux-gnu/libcppunit.so
tests/TestEval: tests/CMakeFiles/TestEval.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestEval"
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestEval.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/TestEval.dir/build: tests/TestEval
.PHONY : tests/CMakeFiles/TestEval.dir/build

tests/CMakeFiles/TestEval.dir/clean:
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestEval.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/TestEval.dir/clean

tests/CMakeFiles/TestEval.dir/depend:
	cd /home/ignacio/ibex_revmono && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono/tests/CMakeFiles/TestEval.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/TestEval.dir/depend

