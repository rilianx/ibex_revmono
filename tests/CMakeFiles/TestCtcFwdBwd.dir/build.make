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
include tests/CMakeFiles/TestCtcFwdBwd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/TestCtcFwdBwd.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/TestCtcFwdBwd.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/TestCtcFwdBwd.dir/flags.make

tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o: tests/CMakeFiles/TestCtcFwdBwd.dir/flags.make
tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o: tests/TestCtcFwdBwd.cpp
tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o: tests/CMakeFiles/TestCtcFwdBwd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o -MF CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o.d -o CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o -c /home/ignacio/ibex_revmono/tests/TestCtcFwdBwd.cpp

tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/TestCtcFwdBwd.cpp > CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.i

tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/TestCtcFwdBwd.cpp -o CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.s

# Object files for target TestCtcFwdBwd
TestCtcFwdBwd_OBJECTS = \
"CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o"

# External object files for target TestCtcFwdBwd
TestCtcFwdBwd_EXTERNAL_OBJECTS =

tests/TestCtcFwdBwd: tests/CMakeFiles/TestCtcFwdBwd.dir/TestCtcFwdBwd.cpp.o
tests/TestCtcFwdBwd: tests/CMakeFiles/TestCtcFwdBwd.dir/build.make
tests/TestCtcFwdBwd: tests/libtest_common.a
tests/TestCtcFwdBwd: src/libibex.a
tests/TestCtcFwdBwd: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgaol.a
tests/TestCtcFwdBwd: interval_lib_wrapper/gaol/gaol-4.2.0-build/libgdtoa.a
tests/TestCtcFwdBwd: interval_lib_wrapper/gaol/mathlib-2.1.0-build/libultim.a
tests/TestCtcFwdBwd: /usr/lib/x86_64-linux-gnu/libcppunit.so
tests/TestCtcFwdBwd: tests/CMakeFiles/TestCtcFwdBwd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestCtcFwdBwd"
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestCtcFwdBwd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/TestCtcFwdBwd.dir/build: tests/TestCtcFwdBwd
.PHONY : tests/CMakeFiles/TestCtcFwdBwd.dir/build

tests/CMakeFiles/TestCtcFwdBwd.dir/clean:
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestCtcFwdBwd.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/TestCtcFwdBwd.dir/clean

tests/CMakeFiles/TestCtcFwdBwd.dir/depend:
	cd /home/ignacio/ibex_revmono && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono/tests/CMakeFiles/TestCtcFwdBwd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/TestCtcFwdBwd.dir/depend

