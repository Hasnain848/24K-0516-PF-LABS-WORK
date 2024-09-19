#include<stdio.h>
int main()
{  int week_day,vacation;
	printf("Enter the Week day: ");
	scanf("%d",&week_day);
	printf("Enter the vacation : ");
	scanf("%d",&vacation);
	if(week_day==0 || vacation==0)
	printf("You can sleep");
	else if (week_day==1 || vacation==0)
      printf("You can not sleep");
    else if (week_day==0 || vacation==1)  
	   	printf("You can sleep");
	   	else printf("Error");
}
