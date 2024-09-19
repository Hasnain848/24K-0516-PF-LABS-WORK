#include<stdio.h>
int main()
{
	float average;
	printf("Enter the grade point average between (0.0 to 4.0) :");
	scanf("%f",&average);
	(average>=0.0 && average<=0.99)?printf("Failed semester"):(average>=1.0 && average<=1.99)?printf("On probation for next semester"):(average>=2.0 && average<=2.99)?printf("no comments"):(average>=3.0 && average<=3.49)?printf("Deans list for semister"):(average>=3.5 && average<=4.00)?printf("Higest honor for semister"):printf("error");
}
