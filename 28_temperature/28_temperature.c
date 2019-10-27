#include <stdio.h>
int main(int argc, char** argv) {

	printf("degrees Fahrenheit: ");
	float F;
	scanf("%f", &F);
	
	float Cel;
	Cel = (F-32)*5./9.;
	printf("%f", Cel);
	return 0;
}
	
	