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
CMAKE_SOURCE_DIR = C:\Users\Dell\CLionProjects\NQueen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NQueen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NQueen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NQueen.dir/flags.make

CMakeFiles/NQueen.dir/main.c.obj: CMakeFiles/NQueen.dir/flags.make
CMakeFiles/NQueen.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NQueen.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\NQueen.dir\main.c.obj   -c C:\Users\Dell\CLionProjects\NQueen\main.c

CMakeFiles/NQueen.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueen.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dell\CLionProjects\NQueen\main.c > CMakeFiles\NQueen.dir\main.c.i

CMakeFiles/NQueen.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueen.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dell\CLionProjects\NQueen\main.c -o CMakeFiles\NQueen.dir\main.c.s

CMakeFiles/NQueen.dir/main.c.obj.requires:

.PHONY : CMakeFiles/NQueen.dir/main.c.obj.requires

CMakeFiles/NQueen.dir/main.c.obj.provides: CMakeFiles/NQueen.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\NQueen.dir\build.make CMakeFiles/NQueen.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/NQueen.dir/main.c.obj.provides

CMakeFiles/NQueen.dir/main.c.obj.provides.build: CMakeFiles/NQueen.dir/main.c.obj


# Object files for target NQueen
NQueen_OBJECTS = \
"CMakeFiles/NQueen.dir/main.c.obj"

# External object files for target NQueen
NQueen_EXTERNAL_OBJECTS =

NQueen.exe: CMakeFiles/NQueen.dir/main.c.obj
NQueen.exe: CMakeFiles/NQueen.dir/build.make
NQueen.exe: CMakeFiles/NQueen.dir/linklibs.rsp
NQueen.exe: CMakeFiles/NQueen.dir/objects1.rsp
NQueen.exe: CMakeFiles/NQueen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable NQueen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NQueen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NQueen.dir/build: NQueen.exe

.PHONY : CMakeFiles/NQueen.dir/build

CMakeFiles/NQueen.dir/requires: CMakeFiles/NQueen.dir/main.c.obj.requires

.PHONY : CMakeFiles/NQueen.dir/requires

CMakeFiles/NQueen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NQueen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NQueen.dir/clean

CMakeFiles/NQueen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell\CLionProjects\NQueen C:\Users\Dell\CLionProjects\NQueen C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug C:\Users\Dell\CLionProjects\NQueen\cmake-build-debug\CMakeFiles\NQueen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NQueen.dir/depend

