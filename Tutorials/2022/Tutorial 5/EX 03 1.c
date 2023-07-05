#include<stdio.h>
	
int main(void)

{
	
	int count = 1;
	int mark;
	int sum=0;
	
	while(count<=4) 
	{
		printf("Enter Mark:"); 
		scanf("%d", &mark);
		
		count = count + 1; 
		sum = sum + mark;
	}
	printf("Total marks = %d", sum);
	
	return 0;
}

