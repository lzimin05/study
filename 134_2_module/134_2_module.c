#include <stdio.h>

int main(int argc, char** argv) {
	printf("module:\n");
	
	float x = -4;
	for (int i = 1; i < 18; i++) {
		
		
		if (x - 2 < 0 && x + 1 < 0) {
			float y1 = (x - 2) * -1;
			float y2 = (x + 1) * -1;
			float sum = y1 + y2;
			printf("%4.2f\n", sum);
		}
		if (x - 2 < 0 && x + 1 > 0) {
			float y1 = (x - 2) * -1;
			float y2 = x + 1;
			float sum = y1 + y2;
			printf("%4.2f\n", sum);
		} 
		if (x - 2 > 0) {
			float y1 = x - 2;
			float y2 = x + 1;
			float sum = y1 + y2;
			printf("%4.2f\n", sum);
		}
		
		
		x = x + 0.5f;
	}
	
	
	return 0;
}