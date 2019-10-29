#include <stdio.h>

int main(int argc, char** argv) {
	
	float v, g = 9.8f, t = 0;
	
	for (int i = 0; i < 7; i++) {
		v = g * t;
		t = t + 0.5f;
		printf("%.2f\n", v);
	}	
			
	return 0;
}