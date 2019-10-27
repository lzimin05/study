#include <stdio.h>
int main(int argc, char** argv) {
	
	float l;
	printf("cube volume calculation");
	printf("enter long cube \n");
	printf("long (cm) -> ");
	scanf("%f",&l);
	
	float v = l*l*l;
	printf("V = %.2f",v);
	
	return 0;
}
	