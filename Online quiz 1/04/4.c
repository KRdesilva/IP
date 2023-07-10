#include<stdio.h>

int main (void)

{
	int no_month;
	float basic;
	float bonus = 0;
	
	printf("Number of months : ");
	scanf(" %d" , &no_month);
	
	printf("Basic Salary : ");
	scanf(" %f" , &basic);
	
	
	if(no_month >= 6)
	{
		if(no_month == 12 && basic <= 45000 )
		{
			bonus = basic+ basic;	
		} 
		
		else
		{
				bonus = no_month * basic;
		}
			
	}
	else
	{
		bonus = 0;

	}
	
	
	printf("Bonus : %.2f " , bonus);
	
	return 0;
}
