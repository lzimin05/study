#include <stdio.h>

int main(int argc, char** argv) {
	
	int i;
	scanf("%i", &i);
	
	printf("Power_2:\n--------------------\n");
	
	int x = 1;
	
	for(int c = 0; c <= i; c++) {
		printf("%5.2i%5.2i\n",c, x);
		x *= 2;
	}
	
	return 0;
}