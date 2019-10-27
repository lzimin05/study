#include <stdio.h>

int main(int argc, char** argv) {
	
	float sum, period, rate;
	
	printf("Enter Sum -> ");  // сумма
	scanf("%f", &sum);
	
	printf("Enter Period -> "); //период месяц
	scanf("%f", &period);
	
	printf("Enter Rate -> ");  //процент годовых
	scanf("%f", &rate);
	
	float r; //процент за месяц
	r = rate / 12 * period;
	
	float profit; //доход
	profit = sum / 100 * r;
	
	printf("Profit = %.2f\n", profit);	
	
	float value = profit + sum;
	
	printf("Value = %.2f", value);
	
	return 0;
}
  