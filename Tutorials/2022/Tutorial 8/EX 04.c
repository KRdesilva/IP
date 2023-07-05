#include<stdio.h>
int main(void)  
{
	int element[10]; 
	int value , i ;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("enter value for element %d : " , i);  
		scanf("%d" , &element[i]);
	}
	printf("\n\n");
	printf("Element\tvalue\tHistogram\n"); 
	
	for(i=0 ; i<10 ; i++)
	{
		printf("%d\t%d\t" , i , element[i]);
		
		for(value = 1 ; value <= element[i] ; value++)  
		{
			printf("*");  
		}
		printf("\n");
	}
	
	return 0; 
}
