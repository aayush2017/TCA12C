#include<stdio.h>

int main() {
	int a, b;

	printf("Enter value for A: ");
	scanf("%d", &a);
	
	printf("\nEnter value for B: ");
	scanf("%d", &b);
	
	if(a < b) {
		printf("A is Small");	
	} else {
		printf("A is Big");	
	}
	return 0;
}
