#include <stdio.h>

int main(){
	int numbers[] = {1,2,3,4,5};
	int length = *(&numbers + 1) - numbers;
	int* numbersP = numbers;
	printf("Array elements \n");
	for(int i = 0; i < length; i++){
		printf("%d\n",*(numbersP + i));
	};
	*(numbersP + 1) = 20;
	*(numbersP + 3) = 40;
	printf("Array of elements modified \n");
	for(int i =0; i < length; i++){
		printf("%d\n",*(numbersP + i));
	};
	printf("Array of elements modified(using array name) \n");
	for(int i=0; i < length; i++){
		printf("%d\n",numbers[i]);
	};
	return 0;
}
