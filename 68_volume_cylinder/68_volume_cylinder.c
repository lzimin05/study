#include <stdio.h>

int main(int argc,char** argv) {

	printf("Calculate volume cylinder: \n");
	printf("Enter base radius -> ");
	float radius_base;
	scanf("%f", &radius_base);
	
	printf("Enter height sylinder -> ");
	float height;
	scanf("%f", &height);
	
	float Pi = 3.1415;
	
	float V = radius_base * radius_base * height * Pi;
	printf("Volume sylinder = %.4f", V);

	return 0;
}