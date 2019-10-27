#include <stdio.h> 

int main(int argc, char** argv) {
	
	float priceaplle;
	printf("Enter price aplle -> ");
	scanf("%f", &priceaplle);
	
	float weight;
	printf("Enter kg aplle -> ");
	scanf("%f", &weight);
	
	float sum = priceaplle * weight;
	printf("Summa purchase = %.2f", sum);
	
	return 0;
}
	
	