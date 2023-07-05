#include<stdio.h>
int main(void)
{
	FILE *medical;  
	medical = fopen("appointment.txt" , "w");   
	
	char name[100];
	char typ;
	int i=0;
	int C_count=0 , S_count = 0 , T_count = 0;
	
	
	if(medical == NULL)
	{
		printf("Not Opened");
		return -1;
	}
	
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter Patient Name :");
		scanf("%s" , name);
		
		printf("Enter appointment Type : ");
		scanf(" %c" , &typ);
		
		
		fprintf(medical , "%s\t  %c\n" , name , typ);
		
	}
	fclose(medical); 
	
	
	FILE *fmedical; 
	fmedical = fopen("appointment.txt" , "r");  
	
	if(fmedical == NULL)
	{
		printf("Not Opened");
		return -1;
	}
	
	
	fscanf(fmedical , "%s %c" , name , &typ );
	while(!feof(medical))
	{
		
		if(typ == 'C' || typ == 'c')
			C_count = C_count + 1;
		else if(typ == 'S' || typ == 's')
			S_count = S_count + 1;
		else if(typ== 'T' || typ== 't')
			T_count = T_count + 1;
		
		fscanf(fmedical , "%s %c" , name , &typ );
	}
	fclose(fmedical); 

	
	printf("\n");
	printf("Appointment Type\tNumber of Patients\n");
	printf("Consulting\t\t %d\n" , C_count);
	printf("Scanning\t\t %d\n" , S_count);
	printf("Testing\t\t\t %d\n" , T_count);
	
	return 0;
}
