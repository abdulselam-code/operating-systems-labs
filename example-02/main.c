#include <fcntl.h>
#include <unistd.h>

int main() {
    int f1 = open("F1.txt",O_CREAT | O_RDONLY,0644);
    int f2 = open("F2.txt",O_CREAT | O_WRONLY | O_APPEND,0644);

    if (f1 < 0 || f2 < 0) return 1;

    char buffer[128];
    int n;

    while ((n = read(f1, buffer, sizeof(buffer))) > 0) {
        write(f2, buffer, n);
    }

    close(f1);
    close(f2);
    return 0;
}

