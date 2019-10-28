#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter the durations of the call (minutes) -> ");
	int a;
	scanf("%i", &a);
	printf("Day of the week. 1 - Monday .... 7 - Sunday -> ");
	int b;
	scanf("%i", &b);
	
	float sum = 2.3 * a;
	
	if (b == 6 || b == 7) {
		float discount = sum * 0.8f;
		printf("You will pay - %.2f", discount);
		return 0;
	}
	printf ("You will pay - %.2f", sum); 
	
	return 0;
}


