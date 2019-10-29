#include <stdio.h>

int main(int argc, char** argv) {
	
	float x = -2, y;
	
	for (int i = 0; i < 9; i++) {
		y = -2.4f * x * x + 5 * x - 3;
		x += 0.5f;	
		printf("%.2f\n",y);
	}
			
	return 0;
}