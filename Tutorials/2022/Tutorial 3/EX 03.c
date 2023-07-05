#include<stdio.h>

int main(void)
{   
	//variables declarations
	int i=1;
	int j=2;
	int k=3;
	int m=2;
	

	printf("%d\n", i==1);
	printf("%d\n", j==3);
	printf("%d\n", i>=1 && j<4);
	printf("%d\n", k+m < j || 3-j >= k);
	printf("%d\n", !m);
	printf("%d\n", !(j-m));
	
	
	
	return 0; //end
	
}
