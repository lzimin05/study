#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("currenty_convert:\n");
	printf("Enter decimal number -> ");
	float s;
	scanf("%f",s);
	int roubles = s;
	int cents = (s - roubles) * 100;
	
	printf("roubles = %i;  cents = %i", roubles, cents);
	
	return 0;
}