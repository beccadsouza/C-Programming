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
CMAKE_COMMAND = C:\Users\Dell\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Dell\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dell\CLionProjects\RabinKarp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RabinKarp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RabinKarp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RabinKarp.dir/flags.make

CMakeFiles/RabinKarp.dir/main.c.obj: CMakeFiles/RabinKarp.dir/flags.make
CMakeFiles/RabinKarp.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RabinKarp.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\RabinKarp.dir\main.c.obj   -c C:\Users\Dell\CLionProjects\RabinKarp\main.c

CMakeFiles/RabinKarp.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RabinKarp.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dell\CLionProjects\RabinKarp\main.c > CMakeFiles\RabinKarp.dir\main.c.i

CMakeFiles/RabinKarp.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RabinKarp.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dell\CLionProjects\RabinKarp\main.c -o CMakeFiles\RabinKarp.dir\main.c.s

CMakeFiles/RabinKarp.dir/main.c.obj.requires:

.PHONY : CMakeFiles/RabinKarp.dir/main.c.obj.requires

CMakeFiles/RabinKarp.dir/main.c.obj.provides: CMakeFiles/RabinKarp.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\RabinKarp.dir\build.make CMakeFiles/RabinKarp.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/RabinKarp.dir/main.c.obj.provides

CMakeFiles/RabinKarp.dir/main.c.obj.provides.build: CMakeFiles/RabinKarp.dir/main.c.obj


# Object files for target RabinKarp
RabinKarp_OBJECTS = \
"CMakeFiles/RabinKarp.dir/main.c.obj"

# External object files for target RabinKarp
RabinKarp_EXTERNAL_OBJECTS =

RabinKarp.exe: CMakeFiles/RabinKarp.dir/main.c.obj
RabinKarp.exe: CMakeFiles/RabinKarp.dir/build.make
RabinKarp.exe: CMakeFiles/RabinKarp.dir/linklibs.rsp
RabinKarp.exe: CMakeFiles/RabinKarp.dir/objects1.rsp
RabinKarp.exe: CMakeFiles/RabinKarp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RabinKarp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RabinKarp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RabinKarp.dir/build: RabinKarp.exe

.PHONY : CMakeFiles/RabinKarp.dir/build

CMakeFiles/RabinKarp.dir/requires: CMakeFiles/RabinKarp.dir/main.c.obj.requires

.PHONY : CMakeFiles/RabinKarp.dir/requires

CMakeFiles/RabinKarp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RabinKarp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RabinKarp.dir/clean

CMakeFiles/RabinKarp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell\CLionProjects\RabinKarp C:\Users\Dell\CLionProjects\RabinKarp C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug C:\Users\Dell\CLionProjects\RabinKarp\cmake-build-debug\CMakeFiles\RabinKarp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RabinKarp.dir/depend

