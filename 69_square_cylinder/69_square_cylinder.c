#include <stdio.h>
#include "math.h"

int main(int argc,char** argv) {

	printf("Calculate square cylinder: \n");
	printf("Enter base radius -> ");
	float radius_base;
	scanf("%f", &radius_base);
	
	printf("Enter height sylinder -> ");
	float height;
	scanf("%f", &height);
	
	float O = 2 * M_PI * radius_base * height;
	printf("Square cylinder = %.2f", O);
	
	return 0;
}