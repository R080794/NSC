# NSC_Project
Description:
 This repository containts an CMake cross platform project that can be compilled and ran on Windows Linux and MacOS systems.
 
Prerequisites:
Cmake tools version 3.x and higher.
Ninja or other build systems.
Insert  in command line the following commands to ensure that the cmake tool and build system is installed correctly:
cmake --version
g++ -- version (this command depends on what builder you want to use)
The available build systems for what cmake can generate project is available in Generator compartiment after typing cmake -help.
The most common issue is when cmake or build system is installed but not available in command line.
The solution is to add the path to cmake or builder in environment variables.

Setup environment:
After cloning the repository on your local drive create a /build/ folder in same directory with /source/ folder.
The /source/ folder will contain CmakeLists needed to make the project and the source code. All generated files and binaries will be available in /build/ folder.
Cmake Lists contains the information about the version of Cmake tools, target and other.
Best practice to edit CmakeLists is to install cmake tools in Visual Studio code and use the autocomplete and help information.

Build steps:
There is to steps to create an executable binary.
1. Run "cmake ../source/" command being in build folder.
	Be aware that the generated files will belong the default build system(it is marked with * in Generator compartiment after running cmake -help)
2. Run msbuild, make, ninja command to compile and create binary file. The command depends on builder that is used.

The executable is available in /build/ folder.

