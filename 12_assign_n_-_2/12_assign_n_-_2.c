#include <stdio.h>
int main (int argc, char** argv) {
	
	printf("assign counter: ");
	float counter;
	scanf("%f", &counter);
	counter-=2;
	printf("%0.2f", counter);
	return 0;
}
	