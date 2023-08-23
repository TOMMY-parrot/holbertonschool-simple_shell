SIMPLE SHELL
Release date aout 21 2023

TABLE OF CONTENTS

Introduction

what is a shell

A shell is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type sh (Bourne Shell) will be developed. Users typically interact with a shell using a terminal emulator that is used for entering data into and displaying or printing data from, a computer or a computing system.

What is it for

This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at /bin/sh.

PROJECT INFORMATIONS

tasks

Task 0. README, man_1_simple_shell, AUTHORS

Task 1. Betty would be proud

Task 2. Simple shell 0.1

Task 3. Simple shell 0.2

Task 4. Simple shell 0.3

Task 5. Simple shell 0.4

Task 6. Simple shell 1.0

Task 7. What happens when you type ls -l in the shell

GENERAL REQUIRMENTS

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 22.04 LTS

Your C programs and functions will be compiled with gcc using the flags -Wall -Werror -Wextra and -pedantic

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

No more than 5 functions per file

All your header files should be include guarded

This shell should not have any memory leaks

Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

allowed functions used

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

DOCUMENTATION
installation
Clone this repository: git clone https://github.com/TOMMY-parrot/holbertonschool-simple_shell.git

Change directories into the repository: cd simple_shell

Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

Run the shell in interactive mode: ./hsh

Or run the shell in non-interactive mode: example echo "Hello world!" | ./hsh

testing
First compile and then run the executable file on your terminal For compile see Installation section

$ ./hsh

$

$ ls -l

total 56

-rw-r--r-- 1 root root 3311 Aug 23 12:38 README.md

-rw-r--r-- 1 root root   52 Aug 23 12:38 authors

-rw-r--r-- 1 root root  599 Aug 23 12:38 get_path.c

-rw-r--r-- 1 root root  350 Aug 23 12:38 getline_command.c

-rw-r--r-- 1 root root  272 Aug 23 12:38 list_env.c

-rw-r--r-- 1 root root 2382 Aug 23 12:38 logic.c

-rw-r--r-- 1 root root 1386 Aug 23 12:38 man_simple_shell

-rw-r--r-- 1 root root  955 Aug 23 12:38 my_shell.h

-rw-r--r-- 1 root root  989 Aug 23 12:38 path_resolution.c

-rw-r--r-- 1 root root 1315 Aug 23 12:38 shell.c

-rw-r--r-- 1 root root 1517 Aug 23 12:38 shell_string_functions.c

-rw-r--r-- 1 root root  658 Aug 23 12:38 tokenization.c

AUTHORS

YASSINE GUELLOUZ