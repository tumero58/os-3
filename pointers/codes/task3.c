#include <stdio.h>

void swap(int* a, int* b){
	int temp = *b;
	*b = *a;
	*a = temp;
};

int main(){
	int a = 5;
	int b = 7;
	printf("Value of a before swap: %d\n",a);
	printf("Value of b before swap: %d\n",b);
	int* aP = &a;
	int* bP = &b;
	swap(aP,bP);
	printf("Value of a after swap: %d\n",a);
	printf("Value of b after swap: %d\n",b);
	return 0;
}
