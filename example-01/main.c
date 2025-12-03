#include <unistd.h>


int main() {
    char buf[15];
    int n;


   n = read(0, buf, sizeof(buf));
   if(n < 0) return 1;


  write(1, buf, n);
  write(1, "\nNumber of characters read: ", 28);


  // Simple way to print number (1-15)
  char num = '0' + n;
  write(1, &num, 1);
  write(1, "\n", 1);


  return 0;
}
