#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter time (minutes.seconds) -> ");
	float time;
	scanf("%f", &time);
	
	int min = time;
	int sec = (time - min) * 100;
	
	if (sec <= 60) {
		printf("ERROR!!!\nNumber of second can not be greater than 60!");
		return 1;
	}
	printf("Minutes = %.2i;  Seconds = %.2i", min, sec); 
	
	return 0;
}