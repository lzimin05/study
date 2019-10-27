#include <stdio.h>
int main(int argc, char** argv) {
	
	float r,h;
	printf("Enter radius -> ");
	scanf("%f",&r);
	
	printf("Enter height -> ");
	scanf("%f",&h);
	
	float Pi = 3.1415;
	
	float V = Pi*r*r*h;
	
	printf("V = %.4f",V);
	
	
	
	return 0;
}
  