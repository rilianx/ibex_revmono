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
include tests/CMakeFiles/test_common.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_common.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_common.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_common.dir/flags.make

tests/CMakeFiles/test_common.dir/utest.cpp.o: tests/CMakeFiles/test_common.dir/flags.make
tests/CMakeFiles/test_common.dir/utest.cpp.o: tests/utest.cpp
tests/CMakeFiles/test_common.dir/utest.cpp.o: tests/CMakeFiles/test_common.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_common.dir/utest.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_common.dir/utest.cpp.o -MF CMakeFiles/test_common.dir/utest.cpp.o.d -o CMakeFiles/test_common.dir/utest.cpp.o -c /home/ignacio/ibex_revmono/tests/utest.cpp

tests/CMakeFiles/test_common.dir/utest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_common.dir/utest.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/utest.cpp > CMakeFiles/test_common.dir/utest.cpp.i

tests/CMakeFiles/test_common.dir/utest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_common.dir/utest.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/utest.cpp -o CMakeFiles/test_common.dir/utest.cpp.s

tests/CMakeFiles/test_common.dir/utils.cpp.o: tests/CMakeFiles/test_common.dir/flags.make
tests/CMakeFiles/test_common.dir/utils.cpp.o: tests/utils.cpp
tests/CMakeFiles/test_common.dir/utils.cpp.o: tests/CMakeFiles/test_common.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/test_common.dir/utils.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_common.dir/utils.cpp.o -MF CMakeFiles/test_common.dir/utils.cpp.o.d -o CMakeFiles/test_common.dir/utils.cpp.o -c /home/ignacio/ibex_revmono/tests/utils.cpp

tests/CMakeFiles/test_common.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_common.dir/utils.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/utils.cpp > CMakeFiles/test_common.dir/utils.cpp.i

tests/CMakeFiles/test_common.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_common.dir/utils.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/utils.cpp -o CMakeFiles/test_common.dir/utils.cpp.s

tests/CMakeFiles/test_common.dir/Ponts30.cpp.o: tests/CMakeFiles/test_common.dir/flags.make
tests/CMakeFiles/test_common.dir/Ponts30.cpp.o: tests/Ponts30.cpp
tests/CMakeFiles/test_common.dir/Ponts30.cpp.o: tests/CMakeFiles/test_common.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/test_common.dir/Ponts30.cpp.o"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_common.dir/Ponts30.cpp.o -MF CMakeFiles/test_common.dir/Ponts30.cpp.o.d -o CMakeFiles/test_common.dir/Ponts30.cpp.o -c /home/ignacio/ibex_revmono/tests/Ponts30.cpp

tests/CMakeFiles/test_common.dir/Ponts30.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_common.dir/Ponts30.cpp.i"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/ibex_revmono/tests/Ponts30.cpp > CMakeFiles/test_common.dir/Ponts30.cpp.i

tests/CMakeFiles/test_common.dir/Ponts30.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_common.dir/Ponts30.cpp.s"
	cd /home/ignacio/ibex_revmono/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/ibex_revmono/tests/Ponts30.cpp -o CMakeFiles/test_common.dir/Ponts30.cpp.s

# Object files for target test_common
test_common_OBJECTS = \
"CMakeFiles/test_common.dir/utest.cpp.o" \
"CMakeFiles/test_common.dir/utils.cpp.o" \
"CMakeFiles/test_common.dir/Ponts30.cpp.o"

# External object files for target test_common
test_common_EXTERNAL_OBJECTS =

tests/libtest_common.a: tests/CMakeFiles/test_common.dir/utest.cpp.o
tests/libtest_common.a: tests/CMakeFiles/test_common.dir/utils.cpp.o
tests/libtest_common.a: tests/CMakeFiles/test_common.dir/Ponts30.cpp.o
tests/libtest_common.a: tests/CMakeFiles/test_common.dir/build.make
tests/libtest_common.a: tests/CMakeFiles/test_common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/ibex_revmono/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libtest_common.a"
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_common.dir/cmake_clean_target.cmake
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_common.dir/build: tests/libtest_common.a
.PHONY : tests/CMakeFiles/test_common.dir/build

tests/CMakeFiles/test_common.dir/clean:
	cd /home/ignacio/ibex_revmono/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_common.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_common.dir/clean

tests/CMakeFiles/test_common.dir/depend:
	cd /home/ignacio/ibex_revmono && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono /home/ignacio/ibex_revmono/tests /home/ignacio/ibex_revmono/tests/CMakeFiles/test_common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_common.dir/depend
