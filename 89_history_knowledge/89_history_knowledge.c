#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("What year Saint Peterburg was founded ?\n");
	float y;
	scanf("%f", &y);
	
	if (y == 1703) {
		printf("You are right");
	} else {
		printf("You are not right");
	}
		
	
	return 0;
}