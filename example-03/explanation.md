# Example – Demonstrate SEEK_SET, SEEK_CUR, and SEEK_END<br>

## Purpose<br>
This program demonstrates the use of lseek() with SEEK_SET, SEEK_CUR, and SEEK_END.<br>

## System Calls / Functions Used<br>
- open()<br>
- lseek()<br>
- read()<br>
- write()<br>
- close()<br>

## How It Works<br>
The program opens F1.txt in read-only mode.<br>
It reads 5 characters from the beginning using SEEK_SET.<br>
It skips 2 characters using SEEK_CUR and reads the next 5 characters.<br>
It moves to the last 5 characters using SEEK_END and reads them.<br>
The file is closed.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

