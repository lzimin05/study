#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number: ");
	float kilometer, verst;
	scanf("%f", &kilometer);
	
	verst=kilometer*1.0668;
	printf("%f", verst);
	return 0;
}