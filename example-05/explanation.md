# Example – Hierarchy of 3 processes: P -> P1 -> P2 using fork()<br>

## Purpose<br>
This program demonstrates creating a process hierarchy of three processes using fork().<br>
P1 is the child of P, and P2 is the child of P1.<br>

## System Calls / Functions Used<br>
- fork()<br>
- getpid()<br>
- printf()<br>

## How It Works<br>
The program first calls fork() to create P1 as child of P.<br>
If the process is P1 (fork() returns 0), it prints its pid and calls fork() again to create P2.<br>
P2 prints its pid.<br>
Parent P prints its pid.<br>
This creates the hierarchy: P -> P1 -> P2.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>


