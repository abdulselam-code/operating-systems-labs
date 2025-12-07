#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before exec()\n");

    // Replace current process with "ls" command
    if(execl("/bin/ls", "ls", "-l", NULL) == -1) {
        perror("execl failed"); // exec only returns on error
    }

    // This line executes only if execl fails
    printf("After exec()\n");

    return 0;
}

