Simple Shell
Table of Contents
Introduction
What is Shell
What is it for
Project Information
Tasks
Enviroment
General requirements
Allowed functions
Documentation
Instalation
Testing
Files
Flowchart
Authors
Introduction
What is Shell
A shell is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type sh (Bourne Shell) will be developed. Users typically interact with a shell using a terminal emulator that is used for entering data into and displaying or printing data from, a computer or a computing system.

What is it for
This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at /bin/sh.

Project Information
Tasks
Task 0. README, man_1_simple_shell, AUTHORS
Task 1. Betty would be proud
Task 2. Simple shell 0.1
Task 3. Simple shell 0.2
Task 4. Simple shell 0.3
Task 5. Simple shell 0.4
Task 6. Simple shell 1.0
Suite CRM OS: Ubuntu 20.04 LTS

terminal

C Low level programming language Language: C Compiler: gcc 9.3.0

Suite CRM Editor: VIM 8.1.2269

git distributed version control system Control version: Git

Github

Style guidelines: Betty style

General requirements
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
No more than 5 functions per file
All your header files should be include guarded
This shell should not have any memory leaks
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
Allowed functions used
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fork (man 2 fork)
free (man 3 free)
getline (man 3 getline)
isatty (man 3 isatty)
malloc (man 3 malloc)
perror(man 3 perror)
signal (man 2 signal)
stat (__ xstat) (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
write (man 2 write)
Documentation
Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
Run the shell in interactive mode: ./hsh
Or run the shell in non-interactive mode: example echo "Hello world!" | ./hsh
Testing
First compile and then run the executable file on your terminal For compile see Installation section
Files
File	Description
AUTHORS	Contributors in this reposity
README.md   project description
get_path.c  extract value of path and return it
getline_command.c   read user input
list_env.c          lists the environmntale variables
logic.c             logic of shell and builtins
my_shell.h          main header file
path_resolution.c   find executable file in each directory
shell.c             main
shell_string_functions.c  shell string functions
tokenization.c            breaking down user inputs in a smaller units

Author
yassine guellouz
