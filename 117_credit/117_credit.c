#include <stdio.h>

int main(int argc, char** argv) {
	
	float v, period, rate;
	printf("Sum -> ");
	scanf("%f", &v);
	
	printf("time (min) -> ");
	scanf("%f", &period);
	
	printf("Rate -> ");
	scanf("%f", &rate);
	
	float debt = v; 
	float sum = 0;
	for (int i = 1; i <= period; i++) {
		float interest = debt * rate / 12 / 100;
		float payment = v / period + interest;
		printf("%2i %9.2f %9.2f %9.2f\n", i, debt, interest, payment);
		debt = debt - v / period;
		sum += interest;
	}
	
	printf("\n--------------\n Total interest - %.2f", sum);
	
	return 0;
}