# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassExample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClassExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassExample.dir/flags.make

CMakeFiles/ClassExample.dir/main.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassExample.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/main.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/main.cpp

CMakeFiles/ClassExample.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/main.cpp > CMakeFiles/ClassExample.dir/main.cpp.i

CMakeFiles/ClassExample.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/main.cpp -o CMakeFiles/ClassExample.dir/main.cpp.s

CMakeFiles/ClassExample.dir/Player.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClassExample.dir/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Player.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Player.cpp

CMakeFiles/ClassExample.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Player.cpp > CMakeFiles/ClassExample.dir/Player.cpp.i

CMakeFiles/ClassExample.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Player.cpp -o CMakeFiles/ClassExample.dir/Player.cpp.s

CMakeFiles/ClassExample.dir/Map.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Map.cpp.o: ../Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ClassExample.dir/Map.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Map.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Map.cpp

CMakeFiles/ClassExample.dir/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Map.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Map.cpp > CMakeFiles/ClassExample.dir/Map.cpp.i

CMakeFiles/ClassExample.dir/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Map.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Map.cpp -o CMakeFiles/ClassExample.dir/Map.cpp.s

CMakeFiles/ClassExample.dir/Room.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Room.cpp.o: ../Room.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ClassExample.dir/Room.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Room.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Room.cpp

CMakeFiles/ClassExample.dir/Room.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Room.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Room.cpp > CMakeFiles/ClassExample.dir/Room.cpp.i

CMakeFiles/ClassExample.dir/Room.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Room.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Room.cpp -o CMakeFiles/ClassExample.dir/Room.cpp.s

CMakeFiles/ClassExample.dir/Item.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Item.cpp.o: ../Item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ClassExample.dir/Item.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Item.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Item.cpp

CMakeFiles/ClassExample.dir/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Item.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Item.cpp > CMakeFiles/ClassExample.dir/Item.cpp.i

CMakeFiles/ClassExample.dir/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Item.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Item.cpp -o CMakeFiles/ClassExample.dir/Item.cpp.s

CMakeFiles/ClassExample.dir/Enemy.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Enemy.cpp.o: ../Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ClassExample.dir/Enemy.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Enemy.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Enemy.cpp

CMakeFiles/ClassExample.dir/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Enemy.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Enemy.cpp > CMakeFiles/ClassExample.dir/Enemy.cpp.i

CMakeFiles/ClassExample.dir/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Enemy.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Enemy.cpp -o CMakeFiles/ClassExample.dir/Enemy.cpp.s

CMakeFiles/ClassExample.dir/Game.cpp.o: CMakeFiles/ClassExample.dir/flags.make
CMakeFiles/ClassExample.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ClassExample.dir/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExample.dir/Game.cpp.o -c /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Game.cpp

CMakeFiles/ClassExample.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExample.dir/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Game.cpp > CMakeFiles/ClassExample.dir/Game.cpp.i

CMakeFiles/ClassExample.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExample.dir/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/Game.cpp -o CMakeFiles/ClassExample.dir/Game.cpp.s

# Object files for target ClassExample
ClassExample_OBJECTS = \
"CMakeFiles/ClassExample.dir/main.cpp.o" \
"CMakeFiles/ClassExample.dir/Player.cpp.o" \
"CMakeFiles/ClassExample.dir/Map.cpp.o" \
"CMakeFiles/ClassExample.dir/Room.cpp.o" \
"CMakeFiles/ClassExample.dir/Item.cpp.o" \
"CMakeFiles/ClassExample.dir/Enemy.cpp.o" \
"CMakeFiles/ClassExample.dir/Game.cpp.o"

# External object files for target ClassExample
ClassExample_EXTERNAL_OBJECTS =

ClassExample: CMakeFiles/ClassExample.dir/main.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Player.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Map.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Room.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Item.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Enemy.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/Game.cpp.o
ClassExample: CMakeFiles/ClassExample.dir/build.make
ClassExample: CMakeFiles/ClassExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ClassExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassExample.dir/build: ClassExample

.PHONY : CMakeFiles/ClassExample.dir/build

CMakeFiles/ClassExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassExample.dir/clean

CMakeFiles/ClassExample.dir/depend:
	cd /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/CMakeFiles/ClassExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassExample.dir/depend

