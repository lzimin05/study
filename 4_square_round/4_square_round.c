#include <stdio.h>

int main(int argc, char** argv) {
	
	float r, s;
	printf("intput radius: ");
	scanf("%f", &r);
	s = 3.1415 * r * r;
	printf("%0.4f", s);
	
	return 0;
}
