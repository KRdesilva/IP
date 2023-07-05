#include<stdio.h>

//function main begins program execution
int main (void)
{
	int num1, num2, tot; //variable declaration
	float avg;	
	
	printf("Enter mark 1:");  //getting input from user
	scanf("%d",&num1);
	
	printf("Enter mark 2:");
	scanf("%d",&num2);
	
	printf("mark1 is %d and mark2 is %d\n",num1, num2);  //display mark1 and mark2
	
	tot = num1 + num2;  //calculate total
	
	printf("Total mark is %d\n", tot);   //display total
	
	avg = tot /2.00;      //calculate avarage
	
	printf("Avarage is %.2f\n",avg);  //display avarage
	
	
	return 0;
}//end of the main function
