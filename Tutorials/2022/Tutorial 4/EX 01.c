#include<stdio.h>

int main(void)
{
	
	int num; //variables declarations
	
	printf("Enter a number : ");    
	scanf("%d", &num);	//input number
	
	//if else statement
	if( num >= 0)
	{
		printf(" Number is : %d", num);	 //display
	}
	else
	{   
		num = -1 * num;    				  //convert negetive  to positive 
		printf("Number is : %d", num); 	 //display
		
	}
	return 0;
	
}
















