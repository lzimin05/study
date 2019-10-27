#include <stdio.h>

int main(int argc, char** argv) {

	float Ax, Ay;
	printf("Enter point coordinates -> ");
	scanf("%f %f", &Ax , &Ay);
	
	float Bx, By;
	printf("Enter point coordinates -> ");
	scanf("%f %f", &Bx , &By);
	
	float Cx, Cy;
	printf("Enter point coordinates -> ");
	scanf("%f %f", &Cx , &Cy);
	
	float O1x, O1y;
	float O2x, O2y;
	float O3x, O3y;
	
	O1x = Ax;
	O1y = By;
	O2x = Bx;
	O2y = Cy;
	O3x = Ax;
	O3y = Cy;
	
	float square_AO1B = AO1 * O1B * 0.5f;
	float square_B02C = B02 * O2C * 0.5f;
	float square_A03C = C03 * O3A * 0.5f;
	
	
	
	
	return 0;
}