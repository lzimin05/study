#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter day of the week (1 - monday ... 7 - sunday) -> ");
	int a;
	scanf("%i", &a);
	
	if (a == 6) {
		printf("Saturday");
		return 0;
	}
	if (a == 7) {
		printf("Sunday");
		return 0;
	}
	if (a <= 5 && a >= 1) {
		printf("Workday");
	} else {
		printf("ERROR");
	}
	
	printf("\n-----------------\n");
	switch (a) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Workday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("ERROR");
			break;
	}
	
	return 0;
}