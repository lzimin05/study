#include <stdio.h>

int main(int argc, char** argv) {
	float sum, income;
	int duration, percent;
	scanf("%f %d %d", &sum, &duration, &percent);
	
	income = percent / 12. * duration * sum / 100;
	//income = percent * duration * sum / 12 / 100;
	
	printf("Income: %.2f", income);
	
	return 0;
}
