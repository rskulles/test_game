# Game Test Bed

This is simple test application that gives you everything you need to start developing 2D games.

## Prerequisites

### Windows

* [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/?q=build+tools)
  * Either install the Community Edition of Visual Studio or scroll down the page, expand the 'Tools for Visual Studio'section and download "Build Tools for Visual Studio".
  * Run the installer.
  * Ensure you have "Desktop Development with C++" in the main panel checked, the optional "C++ CMake tools for Windows" checked in the side pane (will show up as soon as you check "Desktop Development with C++"), and install.
* An IDE or code editor that supports CMake
  * [Visual Studio](https://visualstudio.microsoft.com/downloads) - Community is fine.
  * [Visual Studio Code](https://code.visualstudio.com/) - There are extensions for C++ and CMake. You will be asked to install them when opening a file. Recommend [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
  * [Jetbrains CLion](https://www.jetbrains.com/clion/) - Powerfull IDE that supports CMake out of the box. Free for non-commercial use. Can be confusing to setup projects if not familiar with toolchains.

## Building

### Visual Studio
Open this repository (`File->Open->Folder`). Once it is configured you can build, debug, or run.

### Visual Studio Code
Open the folder (`File->Open Folder...`). You should be prompted to scan for kits. Once the kits are finished scanning, select `Visual Studio Build Tools 20XX Release - x86_amd64`. The XX should match the version of tools you installed earlier (current is 2022 as of this writitng). There should be a build, debug, and run button available in the bottom left of VS Code.   

### Jetbrains CLion
Open this repository. You will be asked to configure which build system and C/C++ toolchain to use. You will also need to setup a target to run. Don't use this option if you are unsure how to set this up.

## Running

When you run the application out of the box. There should be an empty 600 x 800 cyan window. Hit Escape to close it.

## External libraries

External libraries are all under the `vendor` directory.

* [SFML](https://github.com/SFML/SFML)
  * Simple and Fast Multimedia Library. Cross platfom library for handling window  creation, graphics, audio, and networking.