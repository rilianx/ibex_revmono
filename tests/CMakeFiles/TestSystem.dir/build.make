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
include tests/CMakeFiles/TestSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/TestSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/TestSystem.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/TestSystem.dir/flags.make

tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o: tests/CMakeFiles/TestSystem.dir/flags.make
tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o: tests/TestSystem.cpp
tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o: tests/CMakeFiles/TestSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o -MF CMakeFiles/TestSystem.dir/TestSystem.cpp.o.d -o CMakeFiles/TestSystem.dir/TestSystem.cpp.o -c /home/ignacio/ibex_revmono/tests/TestSystem.cpp

tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestSystem.dir/TestSystem.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/TestSystem.cpp > CMakeFiles/TestSystem.dir/TestSystem.cpp.i

tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestSystem.dir/TestSystem.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/TestSystem.cpp -o CMakeFiles/TestSystem.dir/TestSystem.cpp.s

# Object files for target TestSystem
TestSystem_OBJECTS = \
"CMakeFiles/TestSystem.dir/TestSystem.cpp.o"

# External object files for target TestSystem
TestSystem_EXTERNAL_OBJECTS =

tests/TestSystem: tests/CMakeFiles/TestSystem.dir/TestSystem.cpp.o
tests/TestSystem: tests/CMakeFiles/TestSystem.dir/build.make
tests/TestSystem: tests/libtest_common.a
tests/TestSystem: src/libibex.a
tests/TestSystem: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgaol.a
tests/TestSystem: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgdtoa.a
tests/TestSystem: interval_lib_wrapper/gaol/mathlib-2.1.0-build/libultim.a
tests/TestSystem: /usr/lib/x86_64-linux-gnu/libcppunit.so
tests/TestSystem: tests/CMakeFiles/TestSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestSystem"
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/TestSystem.dir/build: tests/TestSystem
.PHONY : tests/CMakeFiles/TestSystem.dir/build

tests/CMakeFiles/TestSystem.dir/clean:
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestSystem.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/TestSystem.dir/clean

tests/CMakeFiles/TestSystem.dir/depend:
	cd /home/ignacio/ibex_revmono && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono/tests/CMakeFiles/TestSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/TestSystem.dir/depend
