#include<stdio.h>
int main(void)
{ 
	//variable declarations
	float num1 , num2;
	char oprt;
	float ans;
	
	//geting inputs 
	printf("Enter Number 1: ");
	scanf("%f" , &num1 );
	
	printf("operator: ");
	scanf("%s" , &oprt );
	
	printf("Enter Number 2: ");
	scanf("%f" , &num2 );
	 
	//if condition
	if (oprt == '+')
	{
		ans = num1 + num2;  // + operator
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '-')  // - operator
	{
		ans = num1 - num2;
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '*')
	{
		ans = num1 * num2;  // * operator
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '/')
	{
		ans = num1 / num2; //  operator
		printf("Answer = %.2f", ans);
		
	}
	else 
	{
		printf("Error");
	}
	
	return 0;
}
