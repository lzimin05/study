#include <stdio.h>

int main(int argc, char** argv) {
	
	int x = 1, y;
	
	for (int i = 0; i < 5; i++) {
		y = x * x;
		x = x + 2;
		printf("%.2i\n", y);
	}	
			
	return 0;
}