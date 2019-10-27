#include <stdio.h>
int main(int argc, char** argv) {
	float a,b,c;
	printf("one number");
	scanf("%f", &a);
	printf("two number");
	scanf("%f", &b);
	printf("thre number");
	scanf("%f", &c);
	
	printf("a=%5.3f  b=%5.3f c=%5.3f",a,b,c);
	return 0;
}