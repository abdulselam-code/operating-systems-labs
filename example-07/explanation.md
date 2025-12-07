# Example-07 – Create an orphan process (only C2 becomes orphan, clean output)<br>

## Purpose<br>
This program demonstrates how to create an orphan process using fork().<br>
Only the second child process (C2) becomes an orphan.<br>
The output is cleaned to prevent extra characters in the terminal.<br>

## System Calls / Functions Used<br>
- fork()<br>
- sleep()<br>
- getpid()<br>
- getppid()<br>
- printf()<br>
- fflush()<br>

## How It Works<br>
The parent process creates child C1 using fork().<br>
C1 creates another child process C2 using fork().<br>
The parent process exits early.<br>
C1 also exits immediately.<br>
C2 sleeps for a few seconds to ensure its parents terminate first.<br>
After waking up, C2 becomes an orphan and its parent becomes init/systemd.<br>
fflush(stdout) is used to flush output buffers and prevent extra characters.<br>
The program prints the PID of C2 and its new parent PID.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

