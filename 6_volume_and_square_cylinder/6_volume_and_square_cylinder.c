#include <stdio.h>

int main(int argv, char** argc) {
	
	float Pi = 3.1415;
	float r, h;
	printf("Input radius and height: ");
	scanf("%f %f", &r, &h);
	float v = Pi * r * r * h;
	float s = 2 * Pi * r * (r + h);
	printf("volume: %.2f, square: %.2f", v, s);
	
	return 0;
}
