#include <stdio.h>

int main(int argc, char** argv) {

	printf("calculate resistance of electric chain: \n");

	float r1;
	printf("input first resistance -> ");
	scanf("%f", &r1);

	float r2;
	printf("input first resistance -> ");
	scanf("%f", &r2);
	
	float sum = (r1*r2)/(r1+r2);
	printf("Total resistance = %.2f", sum);


	return 0;
}
