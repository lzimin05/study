#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Colculate cost of the trip by car:\n");
	
	printf("distance (km) -> "); //растояние
	float distance;
	scanf("%f", &distance);
	
	printf("waste petrol (litre per 100 km) -> "); //расход бензина
	float waste_petrol;
	scanf("%f", &waste_petrol);
	
	printf("price of one litre -> "); // цена 1 литра
	float price_petrol;
	scanf("%f", &price_petrol);
	
	float total_cost = distance / 100 * waste_petrol * price_petrol;
	printf("Total cost = %.2f\n", total_cost);
	
	return 0;
}