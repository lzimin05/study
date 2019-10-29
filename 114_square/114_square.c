#include <stdio.h>

int main(int argc, char** argv) {
	
	int x = 1, y;
	
	for (int i = 0; i < 7; i++) {
		y = x * x;
		x++;
		printf("%.2i\n", y);
	}	
			
	return 0;
}