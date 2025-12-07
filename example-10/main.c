#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("=== Using execl() ===\n");
    printf("Before execl()\n");

    // Replace current process with "ps" command
    if (execl("/bin/ps", "ps", NULL) == -1) {
        perror("execl failed"); // execl only returns on error
    }

    printf("After execl() (only if execl fails)\n\n");

    printf("=== Using system() ===\n");
    printf("Before system()\n");

    // Run "ps" command using system()
    system("ps");

    printf("After system()\n");

    return 0;
}

