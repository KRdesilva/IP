#include<stdio.h>
int main (void)
{
	int sales[4][5];  
	int i,j;
	float sum =0;  
	int daysales[5]; 
	float daysum = 0;
	
	
	for(i=0 ; i<4 ; i++)
	{
		printf("salesperson no %d\n" , i+1);
		for(j=0 ; j<5 ; j++)
		{
			printf("Sales for item number %d : " ,  j+1);
			scanf("%d" , &sales[i][j]);
			
			sum = sum + sales[i][j];
		}
			printf("\n");	
	}
	
 	
 	for(j=0 ; j<5 ; j++)
	{
		daysum = 0;
		
		for(i=0 ; i<4 ; i++)
		{
			daysales[j] = sales[i][j];
			daysum = daysum + daysales[j];
		}
		printf("Day sales of product %d is %.2f\n" , j+1 , daysum);  
	}
 	
 	
	
	printf("\ntotal sales: %.2f" , sum);
	
	return 0;
}
