#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter number -> ");
	int a;
	scanf("%i", &a);
	
	for (int i = 1; i <= 10; i++) {
		int sum = i * a;
		printf("%i * %i = %i\n",a , i, sum);
	}
	return 0;
}