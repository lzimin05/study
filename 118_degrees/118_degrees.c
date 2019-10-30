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
	printf("\n----------------\n");
	
	printf("     C     F\n----------------\n");
		
	float C, F;
	float n;
	n = (t2 - t1) / dt + 1;
	
	for (int i = 0; i < n; i++) {
		F = 9.0f/5.0f * C + 32.0f;
		printf("%7.3f %7.3f\n", C, F);
		C = C + dt;
	}
	
		
		
		
		
		
		
		
	return 0;
}