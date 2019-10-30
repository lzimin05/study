#include <stdio.h>

int main(int argc, char** argv) {
	
	int a;
	printf("Enter number -> ");
	scanf("%i", &a);
	
	int summ = 0;
	for (int i = 0; i <= a * 2; i += 2) {
		summ += i;
	}
	printf("\n---------------\n%i",summ);
	return 0;
}