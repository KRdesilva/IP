#include<stdio.h>

int main(void)

{
	float radius, diameter, cir, area; //variables declarations
	
	printf("Enter the radius : ");
	scanf("%f", &radius); //Input Radius
	
	printf("\n\n");
	
	//calculation
	
	diameter=radius * 2;
	cir= 2 * (22 / (float)7) * radius;
	area= (22.0 / 7) * radius * radius;
	
	//display
	printf("Diameter of the circle : %.2f\n",diameter);     //display Diameter
	printf("Circumference of the circle : %.2f\n",cir);    //display Cricumference
	printf("Area of the circle : %.2f\n",area);           //display Area
	
	
	
	return 0;
}

