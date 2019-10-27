#include <stdio.h>

int main(int argc, char** argv) {

	printf("calculate resistance of electric chain: \n");
	printf("voltage -> ");
	float v;
	scanf("%f", &v);
	
	printf("resistace -> ");
	float r;
	scanf("%f", &r);
	
	float i = v / r;
	printf("I = %.4f", i);
	
	
	
	return 0;
}
