 #include <stdio.h>
 
 int main(int argc, char** argv) {
	 
	 printf("Calculator distance towns\n");
	 int scale;
	 printf("Enter scale -> ");
	 scanf("%i", &scale);
	 
	 float point_distance;
	 printf("Enter distance -> ");
	 scanf("%f", &point_distance);
	 
	 float town_distance = point_distance * scale;
	 printf("Distance between towns = %.2f", town_distance);
	 
	 return 0;
 }