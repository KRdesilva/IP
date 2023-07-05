#include<stdio.h>

//function main begins program execution
int main (void)
{
	char ch1,ch2;
	int i,j,num;
	
	printf("Enter 1st charactar :");
	scanf(" %c",&ch1);
	
	printf("Enter 2nd charactar :");
	scanf(" %c",&ch2);
	
	printf("Enter number of lines :");
	scanf("%d",&num);
	
	for (i=1; i<=num; i++)
	{
		for (j=1; j<=i;j++)
		{
			if (j %2 == 1)
			{
				printf("%c",ch1);
			}
			
			else 
			{
				printf("%c",ch2);
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}//end of the function main

