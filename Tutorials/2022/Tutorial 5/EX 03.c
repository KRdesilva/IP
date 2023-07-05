#include<stdio.h>
	
int main(void)

{
	//variable declarations
	int count = 1;
	int mark;
	int sum=0;
	int x = 1;
	int max = 0;
	int stdNo;
	
	while(x <= 3) 
	{
		count = 1;
		sum = 0;
		while(count <= 4) 
		{
			printf("Enter Marks  :"); 
			scanf("%d", &mark);
			
			//calculation
			count = count + 1; 
			sum = sum + mark;
		}
		
		printf("Total marks = %d\n\n", sum);
		if (sum > max)
			max = sum;
			stdNo = x;	
		x++;
	}
	printf(" Highest marks = %d , Student No = %d", max , stdNo);
	return 0; 
}

