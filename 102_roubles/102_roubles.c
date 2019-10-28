#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter number -> ");
	int b, a;
	scanf("%i", &b);
	
	a = b % 10;
	
	if (a == 1) {
		printf("%i rubl", b);
	}
	if (a == 2 || a == 3 || a == 4) {
		printf("%i rublya", b);
	}
	if (a <= 10 && a >= 5 || a == 0) {
		printf("%i rubley", b);
	}
		
	return 0;
}