#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("exchange:\n");
	printf("Enter weight in pound -> ");
	float pound;
	scanf("%f", &pound);
	
	int kg = pound * 0.4059;
	int gramm = 100 * (pound - kg);
	printf("KG = %i,   Gramm = %i", kg, gramm);
	
	return 0;
}