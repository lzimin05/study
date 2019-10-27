#include <stdio.h> 

int main(int argc, char** argv) {
	
	float pricenotebook;
	printf("Enter price of notebook -> ");
	scanf("%f", &pricenotebook);
	
	float pricecover;
	printf("Enter price of cover -> ");
	scanf("%f", &pricecover);
	
	int set;
	printf("Enter whole set -> ");
	scanf("%i", &set);
	
	float sum = (pricenotebook + pricecover) * set;
	printf("Summa purchase = %.2f", sum);
	
	return 0;
}