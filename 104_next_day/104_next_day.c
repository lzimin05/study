#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter today date ");
	int a, b, c; //день месяц год
	scanf("%i %i %i", &a, &b, &c);

	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
		a = a + 1;
		if (a == 32) {
		a = 1;
		b = b + 1;
			if (b == 13) {		
				b = 1;
				c = c + 1;
				printf("Happy new year\n");
			}
		}			
		printf("Next day %i %i %i", a, b, c);	
	}
	if (b == 4 || b == 6 || b == 9 || b == 11) {
		a = a + 1;
		if (a == 31) {
			a = 1;
			b = b + 1;
			if (b == 13) {
				b = 1;
				c = c + 1;
			}
		}
			printf("Next day %i %i %i", a, b, c);
	}
	if (b == 2) {
		a = a + 1;
		if (c % 4 == 0) {
			printf("flip year\n");
			if (a == 30) {
				a = 1;
				b = b + 1;
				}
		} else {
			if (a == 29) {
				a = 1;
				b = b + 1;
			}
		}
		printf("Next day %i %i %i", a, b, c);
	}
	
	

	return 0;
}
