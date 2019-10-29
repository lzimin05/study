#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Brand of gasoline\n1 - 92\n2 - 95\n3 - 98\n4 - DT\n");
	printf("Your choice -> ");
	int c;
	scanf("%i", &c);	
	
	
	printf("Litres -> ");
	float l;
	scanf("%f", &l);
	
	printf("\n----------------\n");
	
	float cena;
	
	switch (c) {
		case 1:
			cena = 17.5f;
			break;
		case 2:
			cena = 20.3f;
			break;
		case 3:
			cena = 25.4f;
			break;
		case 4:
			cena = 18.5f;
			break;
		default:
			printf("ERROR");
			return 1;
			break;		
	}
	
	float sum = cena * l;
	
	printf("Price per liter - %.2f\n", cena);
	printf("Liters - %.2f\n",l );
	printf("You have to pay = %.2f\n", sum);
	
	
	return 0;
}