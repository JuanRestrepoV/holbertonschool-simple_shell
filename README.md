# Simple Shell Program
A simple shell program written in C that provides a basic command-line interface for users to interact with their system.
## Description
This simple shell program allows users to enter commands interactively. It supports basic shell functionalities, such as executing commands, changing directories, displaying environment variables, and exiting the shell.
## Usage
To use the shell, simply run the executable. If run without arguments, the shell enters interactive mode, displaying a prompt "Shell:# " for users to enter commands.
## Requirements
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
## Testing
Your shell should work like this in interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
## Features
Interactive Mode: Allows users to enter commands interactively.
Command Execution: Executes commands entered by the user.
Exit: Allows the user to exit the shell using the "exit" or "quit" commands.
Environment Variables: Displays environment variables using the "env" or "printenv" command.
## Author
Juan Pablo Restrepo Vidal
