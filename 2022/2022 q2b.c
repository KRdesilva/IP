#include<stdio.h>

//function main begins program execution
int main (void)
{
	int identityArr[4][4];
	int i,j, identity =1;
	

	//accepting values for the matrix
	for (i=0; i<4; i++)
	{
		printf("Values for row %d\n",i+1);
		
		for (j=0; j<4; j++)
		{
			printf("Enter element %d :",j+1);
			scanf("%d",&identityArr[i][j]);
		}
		printf("\n");
	}
	
	//check if it is an identity matrix
	for (i=0; i<4; i++)
	{
		for (i=0; i<4; i++)
		{
			if (i==j && identityArr[i][j] != 1)
			{
				identity =0;
				break;
			}
			
			else if (i != j && identityArr[i][j] != 0)
			{
				identity =0;
				break;
			}
		}
	}
	
	//display the matrix
	printf("Identity matrix is :\n");
	for (i=0;i<4; i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",identityArr[i][j]);	
		}
		printf("\n");
	}
	
	//display if it is an identity matrix or not
	if (identity)
	{
		printf("\nThe matrix is an identity matrix\n");
	}
	
	else
	{
		printf("\nThe matrix is not an identity matrix\n");
	}
	
	
	return 0;
}
