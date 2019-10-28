#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Nevsky Prospect got its name:\n");
	printf("1 - by the name of the river\n");
	printf("2 - by the name of the monastery\n");
	printf("3 - abbout the colonel Alexander Nevsky\n");
	int i;
	scanf("%i", &i);
	
	if (i < 1 || i > 3) {
		printf("EROR!!!");
		return 1;
	}
	
	if (i == 2) {
		printf("You are right");
	} else {
		printf("You are not right");
	}
	return 0;
}