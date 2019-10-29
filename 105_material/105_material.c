#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("-----------------\nJalousie:\n");
	printf("Enter the widht (cm) -> ");
	float a;
	scanf("%f", &a);
	
	printf("-----------------\nEnter the height (cm) -> ");
	float h;
	scanf("%f", &h);
	
	printf("-----------------\nMaterial:\n1 - plastic\n2 - textile\n3 - aluminum\n");
	printf("your choice (1 - 3) -> ");
	int c;
	scanf("%i", &c);
	float cena;
	switch (c) {
		case 1: 
			cena = 200;
			break;
		case 2: 
			cena = 250;
			break;
		case 3: 
			cena = 350;
			break;
		default:
			printf("ERROR");
			return 1;
			break;
			
	}
	float s = (a * h) / 10000;
	float sum = s * cena;
	printf("\n-----------------\nprice per square meter - %.2f", cena);
	printf("\n-----------------\narea - %.2f", s);
	printf("\n-----------------\nto pay - %.2f roubles", sum);
	return 0;
}