#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter range t1 (start)-> ");
	float t1;
	scanf("%f", &t1);
	
	printf("Enter range t2 (end)-> ");
	float t2;
	scanf("%f", &t2);
	
	printf("Enter step -> ");
	float dt;
	scanf("%f", &dt);
	printf("\n----------------------------------\n");

	float n = (t2 - t1) / dt + 1;
	
	float inches, milimetrs, santimetrs;
	
	printf(" Inches   Milimetrs   Santimeters\n----------------------------------\n");
	
	for (int i = 0; i < n; i++) {
	milimetrs = 254 * inches;
	santimetrs = 2.54f * inches;
	printf("%7.3f    %7.3f    %7.3f\n", inches, milimetrs, santimetrs);
	inches = inches + dt;
	
	}
	
	return 0;
}