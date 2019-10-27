#include <stdio.h>
int main(int argc, char** argv) {
	
	float x, y, z, resistance;
	printf("Enter first resistor: ");
	scanf("%f", &x);
	printf("Enter second resistor: ");
	scanf("%f", &y);
	printf("Enter thirddd resistor: ");
	scanf("%f", &z);
	
	resistance = x + y + z;
	printf("resistance electrical circuit =  %f", resistance);

	return 0;
}