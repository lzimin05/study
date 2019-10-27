#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("PHOTOS");
	printf("format(1 - 9*12; 2 - 10*15) -> ");
	
	int format;
	float price;
	scanf("%i", &format);
	
	if (format == 1) {
		price = 2.5f;
	} else {
		price = 3.2f;
	}
	
	float sum;
	float kol;
	printf("Enter number -> ");
	scanf("%f", &kol);
	
	sum = price * kol;
	float discount;
	float total;
	
	if (kol > 10) {	
	    discount = sum * 0.05f;
		total = sum - discount;
	}
	printf("Discount = %.2f ;   ", discount);
	printf("Total = %.2f", total);
	
	return 0;
}