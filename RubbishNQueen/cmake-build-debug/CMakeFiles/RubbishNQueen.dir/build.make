# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Dell\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Dell\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dell\CLionProjects\RubbishNQueen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RubbishNQueen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RubbishNQueen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RubbishNQueen.dir/flags.make

CMakeFiles/RubbishNQueen.dir/main.c.obj: CMakeFiles/RubbishNQueen.dir/flags.make
CMakeFiles/RubbishNQueen.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RubbishNQueen.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\RubbishNQueen.dir\main.c.obj   -c C:\Users\Dell\CLionProjects\RubbishNQueen\main.c

CMakeFiles/RubbishNQueen.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RubbishNQueen.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dell\CLionProjects\RubbishNQueen\main.c > CMakeFiles\RubbishNQueen.dir\main.c.i

CMakeFiles/RubbishNQueen.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RubbishNQueen.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dell\CLionProjects\RubbishNQueen\main.c -o CMakeFiles\RubbishNQueen.dir\main.c.s

CMakeFiles/RubbishNQueen.dir/main.c.obj.requires:

.PHONY : CMakeFiles/RubbishNQueen.dir/main.c.obj.requires

CMakeFiles/RubbishNQueen.dir/main.c.obj.provides: CMakeFiles/RubbishNQueen.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\RubbishNQueen.dir\build.make CMakeFiles/RubbishNQueen.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/RubbishNQueen.dir/main.c.obj.provides

CMakeFiles/RubbishNQueen.dir/main.c.obj.provides.build: CMakeFiles/RubbishNQueen.dir/main.c.obj


# Object files for target RubbishNQueen
RubbishNQueen_OBJECTS = \
"CMakeFiles/RubbishNQueen.dir/main.c.obj"

# External object files for target RubbishNQueen
RubbishNQueen_EXTERNAL_OBJECTS =

RubbishNQueen.exe: CMakeFiles/RubbishNQueen.dir/main.c.obj
RubbishNQueen.exe: CMakeFiles/RubbishNQueen.dir/build.make
RubbishNQueen.exe: CMakeFiles/RubbishNQueen.dir/linklibs.rsp
RubbishNQueen.exe: CMakeFiles/RubbishNQueen.dir/objects1.rsp
RubbishNQueen.exe: CMakeFiles/RubbishNQueen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RubbishNQueen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RubbishNQueen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RubbishNQueen.dir/build: RubbishNQueen.exe

.PHONY : CMakeFiles/RubbishNQueen.dir/build

CMakeFiles/RubbishNQueen.dir/requires: CMakeFiles/RubbishNQueen.dir/main.c.obj.requires

.PHONY : CMakeFiles/RubbishNQueen.dir/requires

CMakeFiles/RubbishNQueen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RubbishNQueen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RubbishNQueen.dir/clean

CMakeFiles/RubbishNQueen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell\CLionProjects\RubbishNQueen C:\Users\Dell\CLionProjects\RubbishNQueen C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug C:\Users\Dell\CLionProjects\RubbishNQueen\cmake-build-debug\CMakeFiles\RubbishNQueen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RubbishNQueen.dir/depend

