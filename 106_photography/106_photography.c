#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Photos :\n----------------\n");
	printf("The size:\n\n1 - 9 * 12\n2 - 10 * 15\n3 - 18 * 24\n");
	printf("Your choice -> ");
	int c;
	scanf("%i", &c);
	float cena;
	switch (c) {
		case 1: 
			cena = 3.5f;
			break;
		case 2:
			cena = 5;
			break;
		case 3:
			cena = 8.5f;
			break;
		default:
			printf("ERROR");
			return 1;
			break;		
	}
	int kol;
	printf("Enter quantity -> ");
	scanf("%i", &kol);
		
	float discount;
	float sum = cena * kol;
	if (kol > 10) {
		discount = sum * 0.1f;
		printf("Your discount 10 percent\n");
	}		
	
	float itog = sum - discount;
	
	printf("You have to pay = %f\n", itog);
	
	return 0;
}