#include<stdio.h>
int main(void)
{
	float num1 , num2;
	char op;
	float ans;
	
	printf("Enter Number 1: ");
	scanf("%f" , &num1 );
	
	printf("operator: ");
	scanf("%s" , &op );
	
	printf("Enter Number 2: ");
	scanf("%f" , &num2 );
	
	
	switch (op)
	{
		case '+' :
			ans = num1 + num2;
			printf("Answer = %.2f", ans );
			break;
		
		case '-' :
			ans = num1 - num2;
			printf("Answer = %.2f", ans );
			break;
			
		case '*' :
			ans = num1 * num2;
			printf("Answer = %.2f", ans );
			break;
			
		case '/' :
			ans = num1 / num2;
			printf("Answer = %.2f", ans);
			break;	
			
		default : printf("Error");	
			
	}
	
	return 0;
}
