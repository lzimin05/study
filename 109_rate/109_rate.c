#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter value -> ");
	float v;
	scanf("%f", &v);
	
	printf("period -> ");
	int period;
	scanf("%i", &period);
	
	float rate;
	
		switch (period) {
			case 3:
				rate = 9;
				break;
			case 6:
				rate = 11.5f;
				break;
			case 12:
				rate = 13.5f;
				break;
			case 18:
				rate = 15;
				break;
			case 24:
				rate = 18;
				break;
			case 36:
				rate = 24;
				break;
			default :
				printf("ERROR");
				return 1;
				break;
		}
	
	printf("\nrate = %.2f", rate);
	
	float profit = v * rate / 100 / 12 * period;
	
	printf("\n profit = %.2f", profit);
	
	
	return 0;
}