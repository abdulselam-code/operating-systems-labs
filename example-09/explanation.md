# Example – Demonstration of exec() function<br>

## Purpose<br>
This program demonstrates how exec() replaces the current process image.<br>
It shows that code after exec() executes only if exec() fails.<br>

## System Calls / Functions Used<br>
- execl()<br>
- perror()<br>
- printf()<br>

## How It Works<br>
The program prints a message before calling exec().<br>
execl() replaces the current process with the "ls -l" command.<br>
If execl() succeeds, the process image is replaced and subsequent code does not execute.<br>
If execl() fails, perror() prints an error and the program continues.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

