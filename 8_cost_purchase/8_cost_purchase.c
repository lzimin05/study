#include <stdio.h>

int main(int argc, char** argv) {
	
	float cost_of_notebook, cost_of_cover;
	
	printf("input cost of notebooks: ");
	scanf("%f", &cost_of_notebook);
	
	printf("input cost of covers: ");
	scanf("%f", &cost_of_cover);
	
	printf("quantity notebooks and covers: ");
	int c;
	scanf("%d", c);
	
	float total_cost = (cost_of_notebook + cost_of_cover) * c;
	printf("Total_cost: %f", total_cost );
	
	return 0;
}
