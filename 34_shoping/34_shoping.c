#include <stdio.h>
int main(int argc, char** argv) {
	
	float pricenotebooks, quantitynotebooks;
	printf("price notebooks : ");
	scanf("%f", &pricenotebooks);
	printf("quantity notebooks : ");
	scanf("%f", &quantitynotebooks);
	
	float pricecovers, quantitycovers;
	printf("price covers : ");
	scanf("%f", &pricecovers);
	printf("quantity covers : ");
	scanf("%f", &quantitycovers);
	
	float pricepens, quantitypens;
	printf("price pens : ");
	scanf("%f", &pricepens);
	printf("quantity pens : ");
	scanf("%f", &quantitypens);
	
	float Sum;
	Sum = (pricenotebooks*quantitynotebooks)+(pricecovers*quantitycovers)+(pricepens*quantitypens);
	printf("price things %f", Sum);
	return 0;
}
	
	
	
	
	