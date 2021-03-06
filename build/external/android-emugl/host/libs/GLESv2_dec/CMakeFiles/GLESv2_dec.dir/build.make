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
CMAKE_SOURCE_DIR = /openvmi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /openvmi/build

# Include any dependencies generated for this target.
include external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/depend.make

# Include the progress variables for this target.
include external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/progress.make

# Include the compile flags for this target's objects.
include external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/flags.make

external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp: external/android-emugl/host/tools/emugen/emugen
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/openvmi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating gles2_dec.cpp, gles2_opcodes.h, gles2_server_context.cpp"
	cd /openvmi/external/android-emugl/host/libs/GLESv2_dec && /openvmi/build/external/android-emugl/host/tools/emugen/emugen -D /openvmi/build/external/android-emugl/host/libs/GLESv2_dec gles2

external/android-emugl/host/libs/GLESv2_dec/gles2_opcodes.h: external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate external/android-emugl/host/libs/GLESv2_dec/gles2_opcodes.h

external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp: external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/flags.make
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o: ../external/android-emugl/host/libs/GLESv2_dec/GLESv2Decoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/openvmi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o -c /openvmi/external/android-emugl/host/libs/GLESv2_dec/GLESv2Decoder.cpp

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.i"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /openvmi/external/android-emugl/host/libs/GLESv2_dec/GLESv2Decoder.cpp > CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.i

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.s"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /openvmi/external/android-emugl/host/libs/GLESv2_dec/GLESv2Decoder.cpp -o CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.s

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.requires:

.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.requires

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.provides: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.requires
	$(MAKE) -f external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build.make external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.provides.build
.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.provides

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.provides.build: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o


external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/flags.make
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o: external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/openvmi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o -c /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.i"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp > CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.i

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.s"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp -o CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.s

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.requires:

.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.requires

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.provides: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.requires
	$(MAKE) -f external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build.make external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.provides.build
.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.provides

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.provides.build: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o


external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/flags.make
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o: external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/openvmi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o -c /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.i"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp > CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.i

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.s"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp -o CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.s

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.requires:

.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.requires

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.provides: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.requires
	$(MAKE) -f external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build.make external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.provides.build
.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.provides

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.provides.build: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o


# Object files for target GLESv2_dec
GLESv2_dec_OBJECTS = \
"CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o" \
"CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o" \
"CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o"

# External object files for target GLESv2_dec
GLESv2_dec_EXTERNAL_OBJECTS =

external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o
external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o
external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o
external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build.make
external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/openvmi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libGLESv2_dec.a"
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && $(CMAKE_COMMAND) -P CMakeFiles/GLESv2_dec.dir/cmake_clean_target.cmake
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GLESv2_dec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build: external/android-emugl/host/libs/GLESv2_dec/libGLESv2_dec.a

.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/build

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/requires: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/GLESv2Decoder.cpp.o.requires
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/requires: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_dec.cpp.o.requires
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/requires: external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/gles2_server_context.cpp.o.requires

.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/requires

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/clean:
	cd /openvmi/build/external/android-emugl/host/libs/GLESv2_dec && $(CMAKE_COMMAND) -P CMakeFiles/GLESv2_dec.dir/cmake_clean.cmake
.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/clean

external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/depend: external/android-emugl/host/libs/GLESv2_dec/gles2_dec.cpp
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/depend: external/android-emugl/host/libs/GLESv2_dec/gles2_opcodes.h
external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/depend: external/android-emugl/host/libs/GLESv2_dec/gles2_server_context.cpp
	cd /openvmi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /openvmi /openvmi/external/android-emugl/host/libs/GLESv2_dec /openvmi/build /openvmi/build/external/android-emugl/host/libs/GLESv2_dec /openvmi/build/external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/android-emugl/host/libs/GLESv2_dec/CMakeFiles/GLESv2_dec.dir/depend

