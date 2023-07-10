#include<stdio.h>

int main (void)
{
	
	int type;
	int unit;
	float charge;
	float add_charge = 0;
	
	printf("Customer Type : ");		
	scanf(" %d" , &type);
	
	printf("Number of Units : ");
	scanf(" %d" , &unit );
	
	if(type == 1)  
	{
		if(unit <= 100)
		{
			charge = 10 * unit;
		}
		else
		{
			charge = 100 * 10 + ((unit - 100 ) * 30 );
			add_charge = charge * 20 / 100 ;  
			
		}
	}
	else if(type == 2)		
	{
		if(unit <= 100)
		{
			charge = 10 * unit;
		}
		else
		{
			charge = 100 * 10 + ((unit - 100 ) * 30 );
		}
	}
	
	charge = charge + add_charge ;
	printf("Monthly charge : %.2f ", charge); 
	
	return 0;

}
