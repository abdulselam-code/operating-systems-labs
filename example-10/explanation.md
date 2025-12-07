# Example-10 – Difference between execl() and system() functions with code<br>

## Purpose<br>
This program demonstrates the difference between execl() and system() functions.<br>
It shows how execl() replaces the current process image while system() creates a new process.<br>

## System Calls / Functions Used<br>
- execl()<br>
- system()<br>
- printf()<br>
- perror()<br>

## How It Works<br>
First, the program prints "Before execl()".<br>
Then execl("/bin/ps") is called, which replaces the current process image with the ps command.<br>
If execl() fails, it prints an error and "After execl()".<br>
Next, the program prints "Before system()".<br>
system("ps") creates a new child process to run the ps command.<br>
The parent process continues and prints "After system()".<br>
This demonstrates that execl() replaces the process image, while system() creates a separate process.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

## Conclusion: execl() vs system()<br>

| Feature | execl() | system() |
|---------|---------|----------|
| Process Image | Replaces the image of the current process | Does not replace the image of the current process |
| New Process | Does not create a new process | Creates a new process |

