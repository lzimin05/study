#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("module:\n");
	
	float x = -4;
	for (int i = 1; i < 18; i++) {
		if (x < 0) {
			float y = x * -1;
			printf("%3.2f %3.2f\n", x, y); 
		} else {
			float y = x;
			printf("+%4.2f %4.2f\n", x, y);
		}
		x = x + 0.5f;
	}
	
	return 0;
}