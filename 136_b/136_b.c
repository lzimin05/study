#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Table Pifagora:\n-------------------------------\n");
	printf("  0");
	for(int i = 10; i > 0; i--) {
		printf("%4i", i);
	}
	printf("\n");
	for(int i = 10; i > 0; i--) {
		printf("%4i", i);
		for(int j = 10; j > 0; j--) {
			printf("%4i", j*i);
		}
		printf("\n");
	}
	return 0;
}