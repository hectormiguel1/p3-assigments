# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/hectorramirez/CLion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hectorramirez/CLion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hectorramirez/CLionProjects/Circle_Properties

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Circle_Properties.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Circle_Properties.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Circle_Properties.dir/flags.make

CMakeFiles/Circle_Properties.dir/circle-properties.c.o: CMakeFiles/Circle_Properties.dir/flags.make
CMakeFiles/Circle_Properties.dir/circle-properties.c.o: ../circle-properties.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Circle_Properties.dir/circle-properties.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Circle_Properties.dir/circle-properties.c.o   -c /home/hectorramirez/CLionProjects/Circle_Properties/circle-properties.c

CMakeFiles/Circle_Properties.dir/circle-properties.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Circle_Properties.dir/circle-properties.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hectorramirez/CLionProjects/Circle_Properties/circle-properties.c > CMakeFiles/Circle_Properties.dir/circle-properties.c.i

CMakeFiles/Circle_Properties.dir/circle-properties.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Circle_Properties.dir/circle-properties.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hectorramirez/CLionProjects/Circle_Properties/circle-properties.c -o CMakeFiles/Circle_Properties.dir/circle-properties.c.s

CMakeFiles/Circle_Properties.dir/test.c.o: CMakeFiles/Circle_Properties.dir/flags.make
CMakeFiles/Circle_Properties.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Circle_Properties.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Circle_Properties.dir/test.c.o   -c /home/hectorramirez/CLionProjects/Circle_Properties/test.c

CMakeFiles/Circle_Properties.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Circle_Properties.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hectorramirez/CLionProjects/Circle_Properties/test.c > CMakeFiles/Circle_Properties.dir/test.c.i

CMakeFiles/Circle_Properties.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Circle_Properties.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hectorramirez/CLionProjects/Circle_Properties/test.c -o CMakeFiles/Circle_Properties.dir/test.c.s

# Object files for target Circle_Properties
Circle_Properties_OBJECTS = \
"CMakeFiles/Circle_Properties.dir/circle-properties.c.o" \
"CMakeFiles/Circle_Properties.dir/test.c.o"

# External object files for target Circle_Properties
Circle_Properties_EXTERNAL_OBJECTS =

Circle_Properties: CMakeFiles/Circle_Properties.dir/circle-properties.c.o
Circle_Properties: CMakeFiles/Circle_Properties.dir/test.c.o
Circle_Properties: CMakeFiles/Circle_Properties.dir/build.make
Circle_Properties: CMakeFiles/Circle_Properties.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Circle_Properties"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Circle_Properties.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Circle_Properties.dir/build: Circle_Properties

.PHONY : CMakeFiles/Circle_Properties.dir/build

CMakeFiles/Circle_Properties.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Circle_Properties.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Circle_Properties.dir/clean

CMakeFiles/Circle_Properties.dir/depend:
	cd /home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hectorramirez/CLionProjects/Circle_Properties /home/hectorramirez/CLionProjects/Circle_Properties /home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug /home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug /home/hectorramirez/CLionProjects/Circle_Properties/cmake-build-debug/CMakeFiles/Circle_Properties.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Circle_Properties.dir/depend

