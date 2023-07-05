#include<stdio.h>
int main(void)  
{
	int motion[5];   
	int i , x;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter value %d :" , i+1);  
		scanf("%d" , &motion[i]);	

	}
	printf("Initial values :");	
	for(i=0 ; i<5 ; i++)
	{
		 printf("%d\t" , motion[i]);	

	}
	printf("\nAfter rotating :");
		
	
	x= motion[0];
	for(i=0 ; i<4 ; i++)
	{
		motion[i] = motion[i+1];
    }
    motion[4] = x;
    
    
    for(i=0 ; i<5 ; i++)	
    printf("%d\t" , motion[i]);
    
	return 0;  
}
