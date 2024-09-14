#include <stdio.h>
#include <stdlib.h>

void f1(){
	printf("f1 called \n");
}

void f2(){
	printf("f2 called \n");
}

int main(){
	printf("atexit can be used in real world applications for:\n * resource management: e.g. to ensure a proper cleanup \n * logging and debugging \n * error handling \n");
	atexit(f1);
	atexit(f2);

	printf("before first exit \n");
	exit(0);
	printf("before second exit \n");
	exit(1);

	return 0;
}
