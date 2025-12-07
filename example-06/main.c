#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        // Child process
        printf("Child process running...\n");
    } else {
        // Parent process
        wait(NULL);  // Parent waits for child
        printf("Parent process finished after child.\n");
    }

    return 0;
}

