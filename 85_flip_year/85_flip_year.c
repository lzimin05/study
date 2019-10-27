#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("flip year:\n");
	printf("Enter year -> ");
	int year;
	scanf("%i", &year);
	
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%i - flip", year);
	} else {
		printf("%i - dont flip", year); 
	}
	
	return 0;
}