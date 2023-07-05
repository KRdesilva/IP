#include<stdio.h>
int main(void)  
{
	int mark[10]; 
	int num;  
	
	for(num=0 ; num<=9 ; ++num)
	{
		printf("Enter mark %d : " , num+1);   
		scanf("%d" , &mark[num]);
		
	}
	
	return 0; 
}
