#include <stdio.h>

int main(){
	int a = 5;
	int* aP = &a;
	int** aPP = &aP;
	printf("Value of number using pointer: %d\n",*aP);
	printf("Value of number using double pointer: %d\n",**aPP);
	return 0;
}
