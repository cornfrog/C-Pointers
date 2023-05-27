#include <stdio.h>

void changePointerValue(int*);
void swapPointers(int*, int*);


int main(){
	int x = 5;	//simple int
	int y = 6;
	int* xPTR = &x;	//pointer to 'x'
	int* yPTR = &y;	//pointer to 'y'

	//printing original values of variables 
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	changePointerValue(xPTR);	//changing 'x' to 10
	swapPointers(xPTR, yPTR); 	//swapping vals 

	//printing variables after swap
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return 0;
}

void changePointerValue(int* pointer){
	*pointer = 10; //dereference pointer and set val to 10
}

void swapPointers(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
