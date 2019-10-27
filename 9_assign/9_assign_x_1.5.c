#include<stdio.h>
int main (int argc, char** argv) {
	
	printf ("Введите число x");
	float x;
	scanf("%f", &x);
	x = x + 1.5;
	printf ("%f", x);
	return 0;
}
