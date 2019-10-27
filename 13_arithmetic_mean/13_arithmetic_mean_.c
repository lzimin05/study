#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter two numbers separated by spaces ");
	float x1, x2, sum;
	scanf("%f %f", &x1, &x2);
	sum = (x1 + x2)/2;
	printf("%0.2f", sum);
	return 0;
}
	

