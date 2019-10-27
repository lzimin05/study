#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("What year North war was began?\n");
	float y;
	scanf("%f", &y);
	
	if (y == 1939) {
		printf("You are right");
	} else {
		printf("You are not right");
	}
		
	
	return 0;
}