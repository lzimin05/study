#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter radius: ");
	float r;
	scanf("%f", &r);
	
	float Pi;
	Pi = 3.1415;
	
	printf("enter the height");
	float h;
	scanf("%f", &h);
	
	float s, v;
	s = 2*Pi*r*(h+r);
	v+Pi*r*r*h;
	printf("area = ,%0.2f", s );
	printf("volume = ,%0.2f", v);
	return 0;
}