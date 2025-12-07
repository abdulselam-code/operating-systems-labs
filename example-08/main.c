#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child process running, PID: %d\n", getpid());
        sleep(5); // Keep child alive so parent can exit first
        printf("Child process exiting, PID: %d\n", getpid());
    } else {
        // Parent process exits immediately
        printf("Parent process exiting, PID: %d\n", getpid());
        // Parent does not call wait(), child becomes zombie temporarily
    }

    return 0;
}

