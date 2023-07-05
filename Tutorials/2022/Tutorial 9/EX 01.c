#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[10000] , neword[10000]; // declare array
	int size , i ,j;  
	
	printf("Enter Word :");  
	scanf("%s" , word);
	
	size = strlen(word);  //size
	
	for(i=0 ; i <= size ; i++)
	{
		neword[i] = word[size-i-1];   // palindrome word
	}
	
	// check palindrome
	for(i=0 ; i <= size ; i++)
	{
		if(neword[i] == word[i])   
		{
			continue;	
		}	
		else
		{
			j = 0;
		}
	}
	
	
	if(j == 0)
		printf("Word is not palindrome");
	else
		printf("Word is palindrome");
		
	return 0;
}
