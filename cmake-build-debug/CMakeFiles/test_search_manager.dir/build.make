# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Clion\CLion 2024.2.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Clion\CLion 2024.2.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Github\CPT109_Group_CW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Github\CPT109_Group_CW\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_search_manager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_search_manager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_search_manager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_search_manager.dir/flags.make

CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj: CMakeFiles/test_search_manager.dir/flags.make
CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj: CMakeFiles/test_search_manager.dir/includes_C.rsp
CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj: F:/Github/CPT109_Group_CW/tests/test_search_manager.c
CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj: CMakeFiles/test_search_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj -MF CMakeFiles\test_search_manager.dir\tests\test_search_manager.c.obj.d -o CMakeFiles\test_search_manager.dir\tests\test_search_manager.c.obj -c F:\Github\CPT109_Group_CW\tests\test_search_manager.c

CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\tests\test_search_manager.c > CMakeFiles\test_search_manager.dir\tests\test_search_manager.c.i

CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\tests\test_search_manager.c -o CMakeFiles\test_search_manager.dir\tests\test_search_manager.c.s

# Object files for target test_search_manager
test_search_manager_OBJECTS = \
"CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj"

# External object files for target test_search_manager
test_search_manager_EXTERNAL_OBJECTS =

test_search_manager.exe: CMakeFiles/test_search_manager.dir/tests/test_search_manager.c.obj
test_search_manager.exe: CMakeFiles/test_search_manager.dir/build.make
test_search_manager.exe: libcpt109_lib.a
test_search_manager.exe: CMakeFiles/test_search_manager.dir/linkLibs.rsp
test_search_manager.exe: CMakeFiles/test_search_manager.dir/objects1.rsp
test_search_manager.exe: CMakeFiles/test_search_manager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_search_manager.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_search_manager.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_search_manager.dir/build: test_search_manager.exe
.PHONY : CMakeFiles/test_search_manager.dir/build

CMakeFiles/test_search_manager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_search_manager.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_search_manager.dir/clean

CMakeFiles/test_search_manager.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Github\CPT109_Group_CW F:\Github\CPT109_Group_CW F:\Github\CPT109_Group_CW\cmake-build-debug F:\Github\CPT109_Group_CW\cmake-build-debug F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles\test_search_manager.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_search_manager.dir/depend

