#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter day of the week (1 - monday ... 7 - sunday) -> ");
	int a;
	scanf("%i", &a);
	
	if (a == 6) {
		printf("Saturday");
	
	}
	if (a == 7) {
		printf("Sunday");
	}
	if (a <= 5 && a >= 1) {
		printf("Workday");
	} else {
		printf("ERROR");
	}
	return 0;
}