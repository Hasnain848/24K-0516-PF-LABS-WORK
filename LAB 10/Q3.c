#include<stdio.h>
#define Max_temp 50
void calctemp(float temp);
int main (){
float temp;
char r;
printf("Temperature monitoring program\n");	
do{   
printf("Enter the Temperature: ");
scanf("%f",&temp);
calctemp(temp);
printf("Do you want to enter other temperature(y/n): ");
scanf(" %c",&r);}while(r=='y');
}
void calctemp(float temp){
	static int counter=0;
	if(temp>Max_temp){
		counter++;
		printf("The temp %.2f exceed the limit of %dC\n",temp,Max_temp);}
	else printf("The temp is with in a limit\n");
	
	printf("Number of times temperature exceeded the limit: %d\n",counter);
}