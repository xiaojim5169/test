# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/jin/cmake-3.17.0-rc1/bin/cmake

# The command to remove a file.
RM = /home/jin/cmake-3.17.0-rc1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/26451/Desktop/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/26451/Desktop/test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coin.dir/flags.make

CMakeFiles/coin.dir/coins.c.o: CMakeFiles/coin.dir/flags.make
CMakeFiles/coin.dir/coins.c.o: ../coins.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/26451/Desktop/test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/coin.dir/coins.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/coin.dir/coins.c.o   -c /mnt/c/Users/26451/Desktop/test/coins.c

CMakeFiles/coin.dir/coins.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/coin.dir/coins.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/26451/Desktop/test/coins.c > CMakeFiles/coin.dir/coins.c.i

CMakeFiles/coin.dir/coins.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/coin.dir/coins.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/26451/Desktop/test/coins.c -o CMakeFiles/coin.dir/coins.c.s

# Object files for target coin
coin_OBJECTS = \
"CMakeFiles/coin.dir/coins.c.o"

# External object files for target coin
coin_EXTERNAL_OBJECTS =

coin: CMakeFiles/coin.dir/coins.c.o
coin: CMakeFiles/coin.dir/build.make
coin: CMakeFiles/coin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/26451/Desktop/test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable coin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coin.dir/build: coin

.PHONY : CMakeFiles/coin.dir/build

CMakeFiles/coin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coin.dir/clean

CMakeFiles/coin.dir/depend:
	cd /mnt/c/Users/26451/Desktop/test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/26451/Desktop/test /mnt/c/Users/26451/Desktop/test /mnt/c/Users/26451/Desktop/test/cmake-build-debug /mnt/c/Users/26451/Desktop/test/cmake-build-debug /mnt/c/Users/26451/Desktop/test/cmake-build-debug/CMakeFiles/coin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coin.dir/depend

