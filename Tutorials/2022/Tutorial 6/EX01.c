#include<stdio.h>
#include<math.h>
int main(void)
{
	float x;  
	
	x = floor(7.5);  
	printf("%.2f\n" , x);
	
	x = ceil(0.0);  
	printf("%.2f\n" , x);
	
 	x = ceil(-6.4);  
 	printf("%.2f\n" , x);
 	
	x = log10(100.0); 
	printf("%.2f\n" , x);

	printf("%.2f\n" , x);
	
	return 0;
}

