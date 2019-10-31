#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Table Pifagor:\n--------------------------------------------\n");
	
	for (int i = 0; i <= 10; i++) {
		printf("%4i", i);
	}
	printf("\n");
	for (int i = 1; i <= 10; i++) {
		printf("%4i", i);
		for (int j = 1; j <= 10; j++) {
			printf("%4i", j * i);
		}
		printf("\n");
	}

	return 0;
}