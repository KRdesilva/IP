#include<stdio.h>
float circleArea( float radius); 
int main(void)  
{
	float radius , area;  
	printf("Enter Radius : ");
	scanf("%f" , &radius);
	
	area = circleArea(radius);  
	printf("Area of the circle : %.2f" , area);
	return 0;
}
float circleArea( float radius)  
{ 
	float area;   
	area = (22.0 / 7) * radius * radius;  
	return area;
}

