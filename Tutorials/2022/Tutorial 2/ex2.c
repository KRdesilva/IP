#include<stdio.h>

int main(void)

{
	printf("%.2f\n",3.446);//a)1
	
	printf("%.1f\n",3.446);	//a)2
	
	printf("%.2f\n",123.4567);	//b)1
	
	printf("%.3f\n",3.14159);//b)2

	
	printf("%15.1f\n", 333.56372);//b)3
	printf("%15.2f\n", 333.56372);
	printf("%15.3f\n", 333.56372);
	printf("%15.4f\n", 333.56372);
	printf("%15.5f\n", 333.56372);
		
return 0;
}

