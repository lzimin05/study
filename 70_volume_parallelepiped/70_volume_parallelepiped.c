#include <stdio.h>

int main(int argc,char** argv) {

	printf("Calculate volume parallelepiped: \n");
	printf("Enter lenght, wide, height through space -> ");
	float lenght, wide, height;
	scanf("%f %f %f", &lenght, &wide, &height);
	
	float V = lenght * wide * height;
	printf("Volume = %.2f", V);

	return 0;
}