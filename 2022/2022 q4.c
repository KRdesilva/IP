#include<stdio.h>

int main (void)
{
	char stID[10];
	int ans[5][4];
	int i,j;
	
	FILE *wptr;
	
	wptr = fopen("answer.dat","w");
	
	if (wptr == NULL)
	{
		printf("File cannot be opend\n");
		return -1;
	}
	
	for (i=0; i<5;i++)
	{
		printf("Enter Student %d Id :",i+1);
		scanf("%s",stID);
		fprintf(wptr,"%s\t\t",stID);
		
		for (j=0;j<4;)
		{
			printf("Enter %d answers :",j+1);
			scanf("%d",&ans[i][j]);
			
			if ((ans[i][j] <= 5) && (ans[i][j] >= 1))
			{
				fprintf(wptr,"%d\t",ans[i][j]);
				j++;
			}
			
			else
			{
				printf("Wrong Answer :");
				
			}
			printf("\n");
		}
		fprintf(wptr,"\n");
	}
	fclose(wptr);
	
	return 0;
}
