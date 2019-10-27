#include <stdio.h>

int main(int argc, char** argv) {

	float R, r;
	scanf("%f %f", &R, &r);

	if (r > R) {
		printf("ERROR!!!\n");
		return 187;
	}

	float s = 3.1415 * (R * R - r * r);
	printf("square: %.4f", s); 
	
	return 0;
}
