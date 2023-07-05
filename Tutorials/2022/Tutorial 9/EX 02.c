#include<stdio.h>
int main(void)
{
	int  ans[4][4]; 
	int i , j;
	
	
	int metrix1[4][4]={{5,7,8,10} , {9,3,0,6} , {8,1,9,2} , {4,7,2,1} };
	int metrix2[4][4]={{2,2,1,3}  , {8,1,3,1} , {1,2,2,4} , {3,1,1,2} };
	
	
	for(i=0 ; i< 4; i++)
	{
		for (j=0 ; j<4 ; j++)
		{
			ans[i][j] = metrix1[i][j] + metrix2[i][j];
		}
	}
	
	printf("\nMetrix number 1 :\n");
	printf("-----------------\n\n");
	for(i=0 ; i< 4; i++)
	{
		printf("|	");
		for (j=0 ; j<4 ; j++)
		{
			printf("%d \t" , metrix1[i][j]);
		}
		printf("|\n");
	}
	printf("\nMetrix number 2 :\n");
	printf("-----------------\n\n");
	for(i=0 ; i< 4; i++)
	{
		printf("|	");
		for (j=0 ; j<4 ; j++)
		{
			printf("%d \t" , metrix2[i][j]);
		}
		printf("|\n");
	}
	
	
	printf("\nAnswer :\n");
	printf("-----------------\n\n");
	
	for(i=0 ; i< 4; i++)
	{
		printf("|	");
		for (j=0 ; j<4 ; j++)
		{
			printf("%d \t" , ans[i][j]);
		}
		printf("|\n");
	}
	
	return 0; 
}
