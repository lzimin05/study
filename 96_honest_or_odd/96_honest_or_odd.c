#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter number -> ");
	int a;
	scanf("%i", &a);
	
	if (a % 2 == 0) {
		printf("%i - evon", a);
	} else {
		printf("%i - odd", a);
	}
	
	return 0;
}