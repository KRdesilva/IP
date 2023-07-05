#include<stdio.h>
int main(void)  
{
	int mark0 , mark[10];
	int num;
	int total  = 0; 
	float mean;
	
	for(num=0 ; num<=9 ; ++num)
	{
		do
		{
		
		printf("Enter mark %d : " , num+1); //getting input 
		scanf("%d" , &mark0);
		
		
		if(mark0 > 0 && mark0 < 20)
		{
			mark[num] = mark0;
		}
			
		else
		{
			printf("Invalid Marks!  "); 
		}
		}
		while(mark0>20 || mark0 < 0);
			
		total = total + mark[num];
	}
	
	printf("values stored in the array\n");
	
	for(num=0 ; num<=9 ; ++num)
	{
		printf("Mark %d is %d\n" , num+1 ,  mark[num]); 
	}
	mean = total / 10.0;
	printf("mean of the marks is : %.2f " , mean); 
	
	return 0;
}
