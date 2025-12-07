#include <stdio.h>
#include<unistd.h>

int main(){
	pid_t p1, p2;

	p1=fork(); //p1 is child of p
	if(p1==0){
		//this is p1
		printf("I am child p1 , pid=%d\n ", getpid());

		p2=fork(); //p2 is child of p1
		if(p2==0){
	            //This is p2
		    printf("I am child p2, pid=%d\n",getpid());
        	}
	}else {
		// Parent p
		printf("I am parent P, pid=%d\n",getpid());

	}

		

	return 0;
}
