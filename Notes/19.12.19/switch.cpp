#include<stdio.h>

int main() {
	int menu;
	printf("\n 1. For Burgur");
	printf("\n\n 2. For Pizza");
	printf("\n\nEnter your choice: ");
	scanf("%d", &menu);
	
	switch(menu) {
		case 1:
			printf("You selected Burger Option.");
			break;
		case 2:
			printf("You selected Pizza Option.");
			break;
	}
	return 0;
}

