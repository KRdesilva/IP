#include<stdio.h>

	
int main(void)
{
	int x,y,a,b;
	int row1 , row2;
	
	printf ("How many Rows  for Half Pyramid :");
	scanf("%d", &row1);
	
	printf ("How many Rows  for Inverted half pyramid :");
	scanf("%d", &row2); 
	
	
	for (x= 1 ; x<=row1 ; x=x+1)
	{
		for(y=1 ; y<=x ; y=y+1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	for (a=row2; a>= 1; --a) 
	{
      for (b = 1; b <= a; ++b) 
	  {
         printf("*");
      }
      printf("\n");
   }
	return 0;
}
