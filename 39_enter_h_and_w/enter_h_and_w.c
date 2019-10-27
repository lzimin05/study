#include <stdio.h>
int main(int argc, char** argv) {
float h, w;
	printf("Enter Height: ");
	scanf("%f", &h);
	printf("Enter Width: ");
	scanf("%f", &w);
	printf("Height = %0.2f sm\nWidth = %0.2f sm\n",h,w);
	return 0;
}