#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

	printf("Enter number -> ");
	int n;
	scanf("%i", &n);
	float sum;
	for (int i = 0; i < n; i++) {
		float dividor = i * 2 + 1;
		int sign = 1;
		if (i % 2 == 0) {
			sign = 1;
		} else {
			sign = -1;
		}
		sum += 1 / dividor * sign;
	}
	printf("%.6f    %.6f    %.6f", sum, M_PI / 4, sum - M_PI / 4);	
	
	
	return 0;
}