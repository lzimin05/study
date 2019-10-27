#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
	
	printf("Solution of squared equation:\n");
	printf("Enter coeffs -> ");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	if (a == 0) {  // bx + c = 0
		float x = -c / b; 
		printf("Root is: %.2f", x);
		return 0;
	}

	// ax2 + bx + c = 0
	
	// D = b2 - 4ac
	float D = b * b - 4 * a * c;
	printf("Discriminat = %.2f", D);
	
	if (D < 0) {
		printf("ERROR");
		return 1;
	}
	
	if (D == 0) {  // x = -b / 2a
		float x = -b / (2 * a);
		printf("Root is: %f", x);
		return 0;
	}
	
	// x1 = (-b + sqrt(D)) / 2a)
	// x2 = (-b - sqrt(D)) / 2a)
	float x1 = (-b + sqrt(D)) / (2 * a);
	float x2 = (-b - sqrt(D)) / (2 * a);
	
	printf("\nx1 = %f\n", x1);
	printf("x2 = %f", x2);
		
	return 0;
}