# Example-11: Thread Communication Using Return Value <br>

## Question <br>
Write a program to create a thread T1. <br>
The main process passes two numbers to T1. <br>
T1 calculates the sum of these numbers and returns the sum  
to the parent process for printing. <br>

---

## Explanation <br>

This program demonstrates how a thread can receive data  
from the main process, perform a computation, and return  
a result back to the parent process using `pthread_exit()`. <br>

### Data Passing <br>
- A structure (`Numbers`) is used to pass two integers to the thread <br>
- The structure pointer is sent as an argument to the thread function <br>

### Thread T1 <br>
- Receives two numbers from the main process <br>
- Calculates their sum <br>
- Dynamically allocates memory to store the result <br>
- Returns the result using `pthread_exit()` <br>

### Main Process <br>
- Creates thread T1 using `pthread_create()` <br>
- Waits for the thread to finish using `pthread_join()` <br>
- Receives the returned sum and prints it <br>
- Frees the dynamically allocated memory <br>

---

## Compilation <br>

```bash
gcc main.c -o example11 -lpthread

