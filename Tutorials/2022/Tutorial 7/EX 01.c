#include<stdio.h>
#include<assert.h>

int qualityPoints(float avg);
int main (void)
{
	float average;
	int ans;
	
	assert(qualityPoints(60) == 0);
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(100) == 4);
	assert(qualityPoints(55) == 0);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(95) == 4);
	
	
	printf("Enter Student Average :");
	scanf(" %f" , &average);
	
	ans = qualityPoints(average);
	
	printf(" %d" , ans);
	
	
	return 0;
}
int qualityPoints(float avg)

{
	int answer;
	
	if(avg <= 60.0)
		answer = 0;
	else if(avg <= 69.0)
		answer = 1;
	else if(avg <= 79.0)
		answer = 2;
	else if(avg <= 89.0)
		answer = 3;		
	else if(avg <= 100.0)
		answer = 4;
	else
		answer = 0;
	
	return answer;
	
}
