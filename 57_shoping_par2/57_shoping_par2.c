#include <stdio.h>
int main(int argc, char** argv) {
	
	float pricenotebooks, quantitynotebooks;
	printf("price notebooks -> ");
	scanf("%f", &pricenotebooks);
	printf("quantity notebooks -> ");
	scanf("%f", &quantitynotebooks);
	
	float pricepens, quantitypens;
	printf("price pens -> ");
	scanf("%f", &pricepens);
	printf("quantity pens -> ");
	scanf("%f", &quantitypens);
	
	float sum = (quantitynotebooks*pricenotebooks)+(pricepens*quantitypens);
	printf("\namount of purchases = %.2f",sum);
	
	return 0;
}