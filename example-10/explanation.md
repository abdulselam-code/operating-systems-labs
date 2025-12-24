# Example-10: Thread Creation and File Handling <br>

## Question <br>
Write a program to create two Threads T1 and T2. <br>
Thread T1 creates a file named `Thread.txt` while T2 writes  
“Hello its T2” into the `Thread.txt`. <br>

---

## Explanation <br>

This program demonstrates the use of POSIX threads (`pthread`) in C  
to perform file operations using multiple threads. <br>

### Thread T1 <br>
- Creates a file named `Thread.txt` <br>
- Uses `fopen()` with write mode (`"w"`) <br>
- Ensures that the file exists before any write operation <br>

### Thread T2 <br>
- Opens the same file in append mode (`"a"`) <br>
- Writes the text **"Hello its T2"** into the file <br>

### Synchronization <br>
- `pthread_join(T1, NULL)` is used to make sure Thread T2 starts  
  **only after** Thread T1 has finished creating the file. <br>
- This prevents race conditions and file access errors. <br>

---

## Compilation <br>

```bash
gcc main.c -o example10 -lpthread

