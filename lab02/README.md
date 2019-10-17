# Lab 2
This lab introduces the concept of version control and more specifically - Git. 

## Basic Commands

```git clone <url>``` - clones a remote repository (e.g. from Github) to your local workstation

```git init``` - makes a folder a git repository

```git status``` - reports the current changes and the difference between the local and remote repository (i.e. Github)

```git add <file>``` - stages the changes to a particular file. ```<file>``` could be a path, e.g. ```git add src/network/listener.cpp```

```git add .``` - stages all changes in the repository.

```git commit -m "some commit message"``` - commits all staged changes to the repository (finilizing them).

```git push``` - pushes the commited changes to the remote repository (e.g. Github)

```git pull``` - pulls commited changes from the remote repository (e.g. Github) to your local repository.

```git help``` - prints detailed information about available git commands

```git <command> -h``` - prints detailed information about a particular git command
