#include <stdio.h>

int main(int argc, char** argv) {
	printf("Enter two numbers through space ->  ");
	int a, b;
	scanf("%i %i", &a, &b);
	printf ("How much is %i * %i\n", a, b);
	int s = a * b;
	float q;
	scanf("%f", &q);
	if (s == q) {
		printf("You are right");
	} else {
		printf("You are not right");
	}	
	return 0;
}