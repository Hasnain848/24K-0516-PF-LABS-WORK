#include<stdio.h>
int main ()
{
	float total_calories,fat,calories_from_fat,percentage;
	printf("Enter the calories in grams :");
	scanf("%f",&total_calories);
	printf("Enter the Fat in grams :");
	scanf("%f",&fat);
	if (total_calories>0 && fat>0)
    	calories_from_fat = fat*9;
    	percentage= calories_from_fat/total_calories;
    	if (calories_from_fat<total_calories)
    	printf("the percentage of calories that come from fat is %f",percentage);
    	else 
		printf("error either the calories or fat grams were incorrectly");
	
		
	
	
	
}
