#include<stdio.h>
int main(void)
{
	FILE *num;  
	num = fopen("number .dat" , "r+");  
	
	int number;
	int fil_num , i=0 , j=0;
	int save_number[5] = {0};
	int f;
	
	
	if(num == NULL)
	{
		printf("File Not Open....");
		return -1;
	}
	
	
	fscanf(num , "%d" , &fil_num );
	while(!feof(num))
	{
		save_number[i] = fil_num ;
		fscanf(num , "%d" , &fil_num );
		i++;
	}
	
	
	printf("Enter Number :");
	scanf("%d" , &number);
	

	
	for(j=0 ; j<i ; j++)
	{
		if(number == save_number[j])
		{
			f = 0;
			break;
		}
		else
		{
			f = 1;
		}			
	}

	
	if(f == 0)
		printf("Error...number already exist in the file\n");
	else
		fprintf(num , "%d\n" , number);
	
	
	fclose(num); 
	
	return 0;
}
