#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("current of the electricity chain:\n");
	printf("Enter power, W -> ");
	float w;
	scanf("%f", &w);
	
	printf("Enter voltage, V -> ");
	float v;
	scanf("%f", &v);
	
	if (v == 0) {
		printf("ERROR!!!\nVoltage is zero");
		return 1;
	}
	float i = w/v;
	printf("Current is : %.2f", i);
	
	return 0;
}