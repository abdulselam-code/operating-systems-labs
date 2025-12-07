#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t c1, c2;

    c1 = fork();

    if (c1 == 0) {
        // Child C1
        c2 = fork();

        if (c2 == 0) {
            // Child C2
            sleep(5);  // Wait so parent dies first
            printf("I am C2 (orphan), PID: %d, Parent PID: %d\n", getpid(), getppid());
        } else {
            // C1 exits immediately
            printf("C1 exiting...\n");
        }
    } else {
        // Parent exits immediately
        sleep(1);
        printf("Parent exiting...\n");
    }

    // Prevent terminal from printing extra return value
    fflush(stdout);

    return 0;
}

