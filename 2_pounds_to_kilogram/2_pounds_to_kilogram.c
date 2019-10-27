#include <stdio.h>

int main(int argc, char** argv) {

	double b, s;
	int a;
	printf("write pound: ");
	scanf("%d", &a);

	b = 0.45;
	s = a * b;
	printf("%.3lf", s);
	
	return 0;
}
