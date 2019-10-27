#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter voltage: ");
	float U;
	scanf("%f", &U);
	
	printf("enter amperage: ");
	float I;
	scanf("%f", &I);
	
	float R;
	R = U/I;
	printf("resistance: %f", R);
	return 0;
}