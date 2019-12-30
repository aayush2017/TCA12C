#include<stdio.h>

int main() {
	int a, b, c;

	printf("Enter value for A: ");
	scanf("%d", &a);
	
	printf("\nEnter value for B: ");
	scanf("%d", &b);

	printf("\nEnter value for c: ");
	scanf("%d", &c);	
	
	/*
	printf("\nEnter value for A,B,C: ");
	scanf("%d %d %d", &a, &b, &c);
	*/

	if(a > b && a > c) {
		printf("A is Big");	
	} 
	return 0;
}
