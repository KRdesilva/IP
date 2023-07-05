#include<stdio.h>
struct marks{
	int mod1, mod2, mod3, mod4;
}std1, std2, std3;
	
int main(void)
{
	int count = 1;
	int stdNo = 1;
	int sum1 , sum2, sum3 ,sum4;
	
	while(count<=3)
	{
		printf("No : %d", stdNo);
	
		if(stdNo == 1)
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std1.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std1.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std1.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std1.mod4);
			sum1 = std1.mod1 + std1.mod2 + std1.mod3 + std1.mod4;
		}
		else if (stdNo == 2)
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std2.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std2.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std2.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std2.mod4);
			sum2 = std2.mod1 + std2.mod2 + std2.mod3 + std2.mod4;
		}
		else
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std3.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std3.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std3.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std3.mod4);
			sum2 = std3.mod1 + std3.mod2 + std3.mod3 + std3.mod4;
		}
		
		count = count + 1;
	}
	
	
	return 0; 
}
