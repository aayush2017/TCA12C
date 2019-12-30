#include<stdio.h>

int main() {
	int a, b, c;
	printf("\nEnter any number for A: ");
	scanf("%d", &a);
	
	printf("\nEnter any number for B: ");
	scanf("%d", &b);
	
	c = a * b;
	printf("\nSum of A+B= %d", c);	
	return 0;
}

