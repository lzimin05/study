#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter month number -> ");
	int a;
	scanf("%i", &a);
	
	if (a == 1) {
		printf("Januare - Winter");
	}
	if (a == 2) {
		printf("February - Winter");
	}
	if (a == 3) {
		printf("March - Spring");
	}
	if (a == 4) {
		printf("April - Spring");
	}
	if (a == 5) {
		printf("May - Spring");
	}
	if (a == 6) {
		printf("June - Summer");
	}
	if (a == 7) {
		printf("July - Summer");
	}
	if (a == 8) {
		printf("August - Summer");
	}
	if (a == 9) {
		printf("September - Autumn");
	}
	if (a == 10) {
		printf("October - Autumn");
	}
	if (a == 11) {
		printf("November - Autumn");
	}
	if (a == 12) {
		printf("December - Winter");
	} 
	if (a < 1 || a > 12) {
		printf("ERROR");
    }
	return 0;
}


