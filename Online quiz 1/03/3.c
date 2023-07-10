#include<stdio.h>

int main (void)
{
	int cus_typ;
	float amt;
	float charge;
	float dis = 0;
	
	printf("Customer Type : ");		
	scanf(" %d" , &cus_typ);
	
	printf("Bill Amount :RS. ");	
	scanf(" %f" , &amt );
	
	if(cus_typ == 1)
	{
		if(amt <= 2500)
		{
			dis = amt * 5.00 /100;
		}
		else if(amt > 2500)
		{
			dis = amt * 10.00 /100;
		}
	}
	else
	{
		if(amt > 5000)
		{
			dis = amt * 10 / 100;
		}
		else 
		{
			dis = 0;
		}
		
	}
	
	printf("Discount Amount :Rs.%.2f\n" , dis);		
	
	charge = amt - dis;
	
	printf("Final Bill Amount :RS. %.2f \n", charge );	

	
	return 0;
}
