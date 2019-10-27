#include <stdio.h>

int main(int argc, char** argv) {

	printf("calculate resistance electric chain:\n");
	
	printf("Enter first resistance -> ");
	float r1;
	scanf("%f", &r1);
	
	printf("Enter second resistance -> ");
	float r2;
	scanf("%f", &r2);
	
	printf("connection type(1-consistent, 2-parsllel) -> ");
	int t;
	scanf("%i",&t); //1 or 2
	float r;
	if (t == 1)
		r = r1 + r2;

	else r = (r1 * r2) / (r1 + r2);
	printf("resistance chain = %.2f", r);
	
	return 0;
}