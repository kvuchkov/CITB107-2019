# Lab 1
This lab is introduction to the Linux operating system as a development environment for C++. We are touching on Linux and how to work with the terminal (Bash).

## Basic Commands
```pwd``` - prints the current working directory.

```ls``` - prints the contents of the working directory.

```cd <path>``` - changes the current working directory to the specified path. Some examples:
* ```cd ~``` - navigates to the home directory of the current user
* ```cd Documents``` - navigates to a directory "Documents" in the current directory
* ```cd uni/citb107/lab02``` - navigates to lab02 directory nested in two other directories.
* ```cd ..``` navigates to the parent directory.

```mkdir -p <path>``` - creates the specified directory. For example:
* ```mkdir -p uni/citb107/lab02``` - creates the whole hierarchy of directories, ending with lab02.

```touch <path>``` - creates a file if missing. If the file exists, updates the last modified. For example:
* ```touch test.cpp``` - creates an empty file or updates its last modified.

```cat <path>``` - outputs the contents of the specified file to the standard output, e.g. prints it to the console.

```rm <path>``` - deletes the specified file. For example:
* ```rm test.cpp``` - deletes the test.cpp file.
* ```rm -r uni/citb107``` - deletes the whole directory (the ```-r``` argument means recursive).

```echo <message>``` - prints the message to the standard output, e.g. the console. For example:
* ```echo "Hello, World"``` - prints **Hello, World**. Note that the double quotes are needed b/c of the space before "World".

## Installing Linux
There are many options to install Linux on your personal notebook/PC. You can try to install it side-by-side with your Windows or replace your Linux entirely. The least disruptive way is to use virtual machine:
1. You first need to install Oracle VirtualBox: https://www.youtube.com/watch?v=63_kPIQUPp8
2. You can then create a virtual machine and install Ubuntu 18.04: https://linuxhint.com/install_ubuntu_18-04_virtualbox/

## Installing VS Code
Assuming you are running Ubuntu:
1. Download VS Code ```.deb``` package from https://code.visualstudio.com/download. Make sure you download 32 or 64-bit version matching your installation (probably 64-bit).
2. Double click the file. It should open it with Ubuntu Software Center and there is a button for installation.
3. You can "Add to Favorites" the VS Code IDE to have it available in the side pane.
4. You can call it from the terminal by:
* ```code .``` - open the current working directory in VS Code
* ```code file.cpp``` - open the specified file in VS Code
* ```code``` - just start the VS Code application without opening anything. 
