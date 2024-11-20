/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/
#include<stdio.h>
#include<string.h>
struct travel_packages
{
	char package_name[20];
	char destination[20];
	int duration;
	float cost;
	int seats_available;
};
void book_package(struct travel_packages packages[],int size);
void display_package(struct travel_packages packages[],int size);
int main(){
	int choice;
	 struct travel_packages packages[5] = {
        {"Beach Escape", "Hawaii", 7, 1200.00, 5},
        {"Mountain Adventure", "Swiss Alps", 10, 2000.00, 3},
        {"City Lights Tour", "New York", 5, 1500.00, 2},
        {"Tropical Paradise", "Maldives", 8, 2500.00, 4},
        {"Safari Adventure", "Kenya", 12, 3500.00, 6}
    };
    while(1){
	
    printf("\nTravel Packages System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
        	case 1:
        		display_package(packages,5);
        		continue; 
        	case 2:
        		display_package(packages,5);
        		book_package(packages,5);
        		return 0;
        		
        	case 3:
        		printf("\nThanks for visiting our agency :)\n");
        		return 0;
        	default:
        		printf("\nPlease enter the correct the choice \n");
        		continue;
		}}
        
}
void book_package(struct travel_packages packages[],int size){
	int p,n;
    printf("\nEnter the Package no: ");
	scanf("%d",&p);
	printf("\nEnter the number of seat you want: ");
	scanf("%d",&n); 
	if(n<packages[p-1].seats_available){ 
	
	printf("\nBooking successful %d seats booked for package: %s\n",n,packages[p-1].package_name);
	int remaing_seats;
	remaing_seats=(packages[p-1].seats_available)-n;
	printf("\nRemaining Seats: %d\n",remaing_seats);}
	else {
		printf("\nSorry Not enough seats for you\n");
		
	}
	
}
void display_package(struct travel_packages packages[],int size){
	printf("Packages :");
	for(int i=0;i<size;i++){
			printf("\nPackage %d: %s\nDestination: %s\nDuration: %d\nCost: %f\nAvailable seats: %d\n",i+1,packages[i].package_name,packages[i].destination,packages[i].duration,packages[i].cost,packages[i].seats_available);	
	        printf("\n");
	}
}

	