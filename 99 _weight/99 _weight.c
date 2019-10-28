#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter height and weight in one line\n");
	float a, b;
	scanf("%f %f", &a, &b);
	float opt = a - 100;
	
	if (opt < b) { //хужеть
		float p = b - opt;
		printf("you must lose weight - %.2f", p);
		return 0;
	}
	if (opt > b) { //толстеть
		float p = opt - b;
		printf("you need to get more weight - %.2f", p);
		return 0;
	} else {
		printf("your weight is optimal");
	}
	
	return 0;
}


