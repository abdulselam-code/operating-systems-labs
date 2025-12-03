# Example – File Append Using System Calls<br>

## Purpose<br>
The purpose of this program is to read the contents of file F1 and append them to file F2 without deleting or overwriting the existing contents of F2.<br>

## System Calls / Functions Used<br>
- open()<br>
- read()<br>
- write()<br>
- close()<br>

## How It Works<br>
The program opens F1 in read-only mode.<br>
Then it opens F2 in write mode with the append option.<br>
It reads data from F1 in small chunks and writes them to the end of F2.<br>
Finally, both files are closed.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>

