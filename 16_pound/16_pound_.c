#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number: ");
	float kg,funt;
	scanf("%f", &funt);
	
	kg = funt*0.4059;
	printf("%f", kg);
	return 0;
}