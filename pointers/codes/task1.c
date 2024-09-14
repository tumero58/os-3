#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main(){
	int a = 5;
	int* aP = &a;
	printf("number: %d\n",a);
	printf("address using number: %p\n",&a);
	printf("address using pointer: %p\n",aP);
	*aP = 7;
	printf("new value of number: %d\n",a);
	return 0;
}
