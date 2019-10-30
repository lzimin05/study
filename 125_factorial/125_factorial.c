#include <stdio.h>

int main(int argc, char** argv) {
	
	int i;
	scanf("%i", &i);
	
	printf("factorial:\n--------------------\n");
	//1 * 2 * 3 = 6 // 
	float summ = 1;
	
	for (int c = 1; c <= i; c++) {
		summ = summ * c;
	}
	printf("%f",summ);
	return 0;
}