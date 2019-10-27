#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Calculate deposite income:\n");
	printf("Enter initial sum -> ");
	float sum;
	scanf("%f",&sum);
	
	printf("Enter period -> ");
	float period;
	scanf("%f",&period);
	
	printf("Enter rate -> ");
	float rate;
	scanf("%f",&rate);
	
	float r = rate / 12 * period;
	float income = sum / 100 * r;
	float total_sum = income + sum;
	printf("\nIncome = %.2f\n",income);
	printf("Total sum = %.2f",total_sum);
	
	return 0;
}