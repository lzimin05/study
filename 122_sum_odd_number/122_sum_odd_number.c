#include <stdio.h>

int main(int argc, char** argv) {
	
	int a;
	printf("Enter number -> ");
	scanf("%i", &a);
	int e = 1;
	int summ = 0;
	for (int i = 1; i <= a; i++) {
		summ += e;
		e += 2;
	}
	printf("\n---------------\n%i",summ);
	return 0;
}