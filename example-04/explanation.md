# Example-04 – Duplicate a file descriptor and use old/new fds<br>

## Purpose<br>
This program demonstrates duplicating a file descriptor using dup().<br>
It reads the first 5 characters from the old descriptor and appends new content using the new descriptor.<br>

## System Calls / Functions Used<br>
- open()<br>
- dup()<br>
- read()<br>
- write()<br>
- lseek()<br>
- close()<br>

## How It Works<br>
The program opens F1.txt in read-write mode.<br>
dup(fd_old) creates a new file descriptor fd_new pointing to the same file.<br>
It reads the first 5 characters using the old descriptor and prints them to stdout.<br>
Then, it moves fd_new to the end of the file and writes additional text.<br>
Finally, both file descriptors are closed.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

