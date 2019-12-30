#include<stdio.h>

void printStar(int); // declare

void main() {
	printStar(5); // call
}

void printStar(int n) { // Defination
	int i, j;
	for(i=1; i<=n; i++) {
		for(j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
