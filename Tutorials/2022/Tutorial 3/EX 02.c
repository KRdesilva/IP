#include<stdio.h>

int main(void)
{
	//variables
	int num;
	int num1, num2, num3, num4, num5;
	int div1, div2 ,div3,div4, div5;
	//Input Number
	printf("Enter a 5 digit Number : ");
	scanf("%d",&num);
	
	//Calculation
	num1= num%10; 
	div1= num/10; 
	
	num2= div1%10;
	div2= num/100; 
	
	num3= div2%10;
	div3= num/1000; 
	
	num4= div3%10;
	div4= num/10000; 
	
	num5= div4%10;
	div5= num/100000; 
	
	//Display
	printf("---------------------------------\n");
	printf("%d \t ", num5);
	printf("%d \t ", num4);
	printf("%d \t ", num3);
	printf("%d \t ", num2);
	printf("%d \t ", num1);
	
	return 0; //end
}
