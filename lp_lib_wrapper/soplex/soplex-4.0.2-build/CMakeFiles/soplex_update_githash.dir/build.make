# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaraya/ibex2020

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaraya/ibex2020

# Utility rule file for soplex_update_githash.

# Include the progress variables for this target.
include lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/progress.make

lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash:
	cd /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2-build && /usr/bin/cmake -DDST=/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/git_hash.cpp -P /home/iaraya/ibex2020/soplex_update_githash.cmake

soplex_update_githash: lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash
soplex_update_githash: lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/build.make

.PHONY : soplex_update_githash

# Rule to build all files generated by this target.
lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/build: soplex_update_githash

.PHONY : lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/build

lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/clean:
	cd /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2-build && $(CMAKE_COMMAND) -P CMakeFiles/soplex_update_githash.dir/cmake_clean.cmake
.PHONY : lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/clean

lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/depend:
	cd /home/iaraya/ibex2020 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaraya/ibex2020 /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2 /home/iaraya/ibex2020 /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2-build /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lp_lib_wrapper/soplex/soplex-4.0.2-build/CMakeFiles/soplex_update_githash.dir/depend

