#include <stdio.h>

int main(int argc, char** argv) {
	int b;
	scanf("%i", &b);
	
	printf("Chess\n\n");
	
	for (int i = 0; i <= 8; i++) {
		if (i % 2 != 0) {
			printf(" ");
		}
		for (int j = 1; j <= b; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}