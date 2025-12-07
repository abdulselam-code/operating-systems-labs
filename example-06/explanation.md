# Example-06 – Demonstration of wait() system call<br>

## Purpose<br>
This program demonstrates the use of the wait() system call.<br>
It shows how a parent process waits for its child process to finish.<br>

## System Calls / Functions Used<br>
- fork()<br>
- wait()<br>
- printf()<br>

## How It Works<br>
The program creates a child process using fork().<br>
The child process prints a message and exits.<br>
The parent process calls wait() to pause execution until the child finishes.<br>
After the child ends, the parent prints its message.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

