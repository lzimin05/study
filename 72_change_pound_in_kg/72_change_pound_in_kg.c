#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("recalculate distance pound in kg:\n");
	
	printf("Enter weight in pound -> ");
	float p;
	scanf("%f", &p);
	
	float kg = p * 0.4059f;
	printf("KG = %.2f", kg);
	
	
	return 0;
}