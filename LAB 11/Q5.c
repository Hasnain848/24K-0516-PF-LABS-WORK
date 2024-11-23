#include<stdio.h>
struct date {
	int day;
	int month;
	int year;
};
struct Event {
	char event_name[20];
	char location[50];
	struct date eventdate;
};
int main() {
	int n;
	printf("Enter the number of events: ");
	scanf("%d", &n);
	struct Event events[n];
	for (int i=0; i<n; i++) {
		printf("\nEnter details for event %d:\n", i + 1);
		printf("Event Name: ");
		scanf(" %[^\n]",events[i].event_name);
		printf("Event Date (day month year): ");
		scanf("%d %d %d",&events[i].eventdate.day,&events[i].eventdate.month,&events[i].eventdate.year);
		printf("Event Location: ");
		scanf(" %[^\n]",events[i].location);
	}
	for(int i=0; i<n; i++) {
		printf("------------------------------------\n");
		printf("           Event %d Details         \n",i+1);
		printf("Name: %s\n",events[i].event_name);
		printf("Date: %d %d %d \n",events[i].eventdate.day,events[i].eventdate.month,events[i].eventdate.year);
		printf("Location: %s \n",events[i].location);
		printf("------------------------------------\n");
	}
}