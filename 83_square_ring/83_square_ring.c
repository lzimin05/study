#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
	
	printf("Calculate square of the ring:\n");
	printf("Enter radius ring -> ");
	float r1;
	scanf("%f", &r1);
	
	printf("Enter radius of the hole -> ");
	float r2;
	scanf("%f", &r2);
	
	if (r2 > r1) {
		printf("ERROR!!!\n radius of the hole is greater than radius of the ring);		");
		return 1;
	}
	float sr1 =	M_PI * r1 * r1;
	float sr2 = M_PI * r2 * r2;
	float sring = sr1 - sr2;
	printf("Square ring = %.4f", sring);
	
	return 0;
}