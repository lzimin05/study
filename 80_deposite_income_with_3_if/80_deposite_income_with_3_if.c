#include <stdio.h>

int main(int argc, char** argv) {

	float sum;
	printf("Enter sum, roubles -> ");
	scanf("%f", &sum);
	
	float period;
	printf("Enter period (mounts) -> ");
	scanf("%f", &period);
	
	float percent;
	
	if (sum <= 5000)
		percent = 9;
	if (sum <= 10000)
		percent = 11;
	else percent = 13;
	
	float r = percent / 12 * period;
	float profit = sum * r /100;
	float total_sum = sum + profit;
	printf("Profit = %.2f;  ", profit);
	printf("Total sum = %.2f", total_sum);
	

	return 0;
}