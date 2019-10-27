#include <stdio.h>
int main(int argc, char** argv) {
	
	float l;
	printf("enter the date \n");
	printf("long (cm) -> ");
	scanf("%f",&l);
	
	float s;
	printf("short (cm) -> ");
	scanf("%f",&s);
	
	float v = (s+l)*2;
	printf("S = %f",v);
	
	return 0;
}