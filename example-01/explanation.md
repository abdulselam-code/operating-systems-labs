# Example-01 – Read / Write System Call Demo<br>

## Purpose<br>  
The purpose of this example is to demonstrate basic I/O in Unix-like operating systems using the read() and write() system calls in C: reading input from standard input (keyboard) and writing output to standard output (screen).<br>

## System Calls / Functions Used<br>  
System calls:write(), read()<br>   

## How It Works  <br>
The program calls `read()` with file descriptor 0 (standard input) to read a fixed number of bytes into a buffer. Then it calls `write()` with file descriptor 1 (standard output) to write the content of the buffer back to the screen.  
When `read()` returns the number of bytes actually read, the program uses that count in `write()` to ensure only the valid bytes are output — avoiding printing garbage or uninitialized data. This ensures correct input/output behavior even if the user types fewer bytes than the buffer size.<br>

## How to Compile and Run<br>  

gcc main.c -o app<br>  
./app<br>

