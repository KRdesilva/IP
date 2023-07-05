#include<stdio.h>
#include<assert.h>
#include<math.h>

void testHypotenuse();
double hypotenuse(double side1 , double side2);
int main (void)
{
	double side1 , side2 , side3;  // variable declarations
	double result;
	
	testHypotenuse();  
	
	// geting inputs
	printf("Enter Side 1 :");
	scanf("%lf" , &side1);
	
	printf("Enter Side 2 :");
	scanf("%lf" , &side2);
	
	side3 = hypotenuse( side1 ,  side2);  
	result = fabs(side3);
	
	printf("length of the hypotenuse is :  %.2lf" , result);  //Output
	
	return 0;
}
double hypotenuse(double side1 , double side2)  // function Implementation 
{
	double x,side3;
	
	x= pow(side1 , 2) + pow(side2 , 2);
	side3 = sqrt(x);
	
	return side3;
}
void testHypotenuse()  // function Implementation 
{
	//assert statements
	assert(fabs(hypotenuse(3.0 , 4.0) == 5) );
	assert(fabs(hypotenuse(5.0 , 12.0) == 13) );
	assert(fabs(hypotenuse(8.0 , 15.0) == 17) );	
}
