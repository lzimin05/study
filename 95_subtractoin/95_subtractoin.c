#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	
	time_t t;
	srand(time(&t));
	
	int a, b;
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	printf("How much is %i - %i\n", a, b);
	
	int s = a - b;
	float q;
	scanf("%f", &q);
	if (s == q) {
		printf("You are right");
	} else {
		printf("You are not right");
	}	
	return 0;
}