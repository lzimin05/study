#include <stdio.h>
int main(int argc, char** argv) {
	
	float x;
	printf("Enter resistance electrical chains Om: ");
	scanf("%f", &x);
	float kOm;
	kOm = x / 1000;
	printf("resistance electrical chains kOm = %f", kOm);
	
	return 0;
}