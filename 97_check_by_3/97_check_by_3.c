#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter number -> ");
	int a;
	scanf("%i", &a);
	
	if (a % 3 == 0) {
		printf("%i - this number is divided on the 3", a);
	} else {
		printf("%i - this number is not devided", a);
	}
	
	return 0;
}