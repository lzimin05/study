#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("architrctor Isaac Cathedral:\n");
	printf("1 - Dominiko Tresin\n");
	printf("2 - Auguste Monferran\n");
	printf("3 - Charles Rossi\n");
	int i;
	scanf("%i", &i);
	
	if (i == 2) {
		printf("You are right");
	} else {
		printf("You are not right");
	}
	
	return 0;
}