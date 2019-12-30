#include<stdio.h>

int main() {
	int a, b, c;
	printf("****** Scanf Example ******\n");
	
	printf("\nEnter value for Sum A + :");
	scanf("%d", &a);
	
	printf("\nEnter value for Sum B + :");
	scanf("%d", &b);
	
	c = a + b;
	printf("\nValue of C is: %d", c);
	return 0;
}
