#include<stdio.h>
struct Date
{
	int day;
	int month;
	int year;
};
calculate_days(struct Date date1,struct Date date2);
int main(){
	
}
calculate_days(struct Date date1,struct Date date2){
	int days1=date1.day;
	int days2=date2.day;
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int daysInMonth1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(isleapyear(date1.year)){
		daysInMonth[1]=29;
	}
	if(isleapyear(date2.year)){
		daysInMonth1[1]=29;
	}
	
}