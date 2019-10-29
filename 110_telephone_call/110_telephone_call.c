#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Vladivostok - 423\n Moscow - 495\nMurmansk - 815\nSamara - 846\nEnter telephone code -> ");
	int c;
	scanf("%i", &c);
	
	printf("Enter time conversation (min) -> ");
	float m;
	scanf("%f", &m);
	
	float cena;
	
	switch (c) {
		case 423:
			printf("Vladivostok");
			cena = 2.2f;
			break;
		case 495:
			printf("Moscow");
			cena = 1;
			break;	
		case 815:
			printf("Murmansk");
			cena = 1.2f;
			break;
		case 846:
			printf("Samara");
			cena = 1.4f;
			break;
		default :
			printf("ERROR");
			return 1;
	}
	
	float sum = cena * m;
	printf("\nYou shoud to pay = %.2f", sum);
	
	
	
	
	return 0;
}