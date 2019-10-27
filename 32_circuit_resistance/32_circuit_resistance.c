#include <stdio.h>
int main(int argc, char** argv) {
	
	float x, y;
	printf("Enter first resistor: ");
	scanf("%f", &x);
	printf("Enter second resistor: ");
	scanf("%f", &y);
	
	float resistance;
	resistance = (x*y)/(x+y);
	printf("resistance electrical circuit =  %f", resistance);
	
	return 0;
}