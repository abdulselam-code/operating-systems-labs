#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
    int fd_old = open("F1.txt",O_RDWR);
    if(fd_old<0) return 1;

    int fd_new=dup(fd_old);// duplicate fd_old
	
    char buf[5];

    //Read first 5 characters using old fd
    read(fd_old, buf, 5);
    write(1,buf ,5); // print to stdout  
    write(1, "\n",1);

    // Append new content using new fd
    lseek(fd_new, 0,SEEK_END);
    char *new_text="APPENDED";
    write(fd_new, new_text ,strlen(new_text));

    close(fd_old);
    close(fd_new);


    return 0;
}
