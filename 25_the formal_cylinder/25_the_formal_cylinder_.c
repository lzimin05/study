#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number: ");
	float r;
	scanf("%f", &r);
	
	float Pi;
	Pi = 3.1415;
	
	printf("enter the height");
	float h;
	scanf("%f", &h);
	
	float v;
	v=Pi*r*r*h;
	printf("volume = %f", v);
	return 0;
}