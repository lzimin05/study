#include <stdio.h>

int main(int argc, char** argv) {
	
	float cost_of_notebook;
	int count_of_notebook;
	printf("input cost and count of notebooks: ");
	scanf("%f %d", &cost_of_notebook, &count_of_notebook);
	
	float cost_of_pensil;
	int count_of_pensil;
	printf("input cost and count of pensil: ");
	scanf("%f %d", &cost_of_pensil, &count_of_pensil);

	float cost_of_lane;
	int count_of_lane;
	printf("input cost and count of lane: ");
	scanf("%f %d", &cost_of_lane, &count_of_lane);
	
	float total_cost = (cost_of_notebook * count_of_notebook) +
					   (cost_of_pensil * count_of_pensil) +
					   (cost_of_lane * count_of_lane);
		
	printf("Total cost: %.2f", total_cost);

	return 0;
}
