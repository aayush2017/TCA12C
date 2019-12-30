#include<stdio.h>
#include<conio.h>
void printStar(int);

int main() {
	printStar(10);
	return 0;
}

void printStar(int count) {
	for(int i=1; i<=count; i++) {
		for(int j=1; j<= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
