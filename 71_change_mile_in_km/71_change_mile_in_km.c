#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("recalculate distance mile in km:\n");
	
	printf("Enter distance in mile -> ");
	float m;
	scanf("%f", &m);
	
	float km = m *  1.60094f;
	printf("KM = %.2f", km);
	
	return 0;
}