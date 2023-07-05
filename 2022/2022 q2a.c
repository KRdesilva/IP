#include<stdio.h>


//function main begins program execution
int main (void)
{
	int numArr[8];
	int i,j, temp;

	
	for (i=0; i<8; i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d",&numArr[i]);
	}
	
	printf("\nOriginal Array:\n");
	
	for (i=0; i<8; i++)
	{
		printf("%d\t",numArr[i]);
	}
	
	printf("\n\nafter oving all the 2 positions to right :\n");
	
	temp = numArr[0];
	for (i=0; i<6;i++)
	{
		numArr[i] = numArr[i+2];
	}
	
	numArr[6] = temp;
	printf("\n");
	
	for (i=0; i<8; i++)
	{
		printf("%d\t",numArr[i]);
	}
	
	return 0;
}//end of the function main

