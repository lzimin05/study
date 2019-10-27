#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter voltage: ");
	float U;
	scanf("%f", &U);
	
	printf("enter resistance: ");
	float R;
	scanf("%f", &R);
	
	float I;
	I = U/R;
	printf("amperage: %f", I);
	return 0;
}
	