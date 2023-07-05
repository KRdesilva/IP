#include<stdio.h>

int main(void)
{
	int num; 
	 
	printf("Enter Number : "); //get number 
	scanf("%d", &num);
	
	while(num >= 0) //while loop
	{
	
		printf("Enter Number : ");
		scanf("%d", &num);
	}
	
	return 0;
}
