#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter date -> ");
	int day, month, year;
	scanf("%i %i %i", &day, &month, &year);
	
	int c = year / 100;
	int Y = year % 100;
	
	int x = 7 / 4;
	
	int r = (day + (1 / 5 * (13 * month - 1)) + Y + (Y / 4) + (c / 4) - 2 * c + 777) % 7; 
	switch (r) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 0:
			printf("Sunday");
			break;
	}
	
	return 0;
}