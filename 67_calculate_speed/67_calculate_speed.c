#include <stdio.h>
 
 int main(int argc, char** argv) {
	 
	 printf("Calculate speed of the cycler\n ");
	 printf("Enter distance (meters) -> ");
	 float distance;
	 scanf("%f", &distance);
	 
	 printf("Enter time (second) -> ");
	 float time;
	 scanf("%f", &time);
	 
	 float S = (distance / 1000) / (time / 3600);
	 printf("Speed of the cycler = %.2f", S);
	 
	 
	 return 0;
 }