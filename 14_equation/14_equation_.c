#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number x: ");
	float x, y;
	scanf("%f", &x);
	
	y=-2.7*x*x*x+0.23*x*x-1.4;
	printf("%lf", y);
	return 0;
}
	