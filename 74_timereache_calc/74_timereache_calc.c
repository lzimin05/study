#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter time reache (minets) -> ");
	int min;
	scanf("%i", &min);
	
	int hours = min / 60;
	int minutes = min % 60;
	
	printf("horse -> %i     ", hours);
	printf("minutes -> %i", minutes);

	return 0;
}