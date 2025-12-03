#include <fcntl.h>
#include <unistd.h>

int main() {
    int f = open("F1.txt", O_RDONLY);
    if(f < 0) return 1;

    char buf[5];

    // SEEK_SET
    lseek(f, 0, SEEK_SET);
    read(f, buf, 5);
    write(1, buf, 5);

    write(1, "\n", 1);

    // SEEK_CUR
    lseek(f, 2, SEEK_CUR); // skip 2 characters
    read(f, buf, 5);
    write(1, buf, 5);

    write(1, "\n", 1);

    // SEEK_END
    lseek(f, -5, SEEK_END);
    read(f, buf, 5);
    write(1, buf, 5);

    close(f);
    return 0;
}

