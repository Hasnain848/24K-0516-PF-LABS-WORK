#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char first_name[30];
char last_name[30];
char roll_num[10];
printf("Enter First Name: ");
scanf(" %[^\n]",&first_name);
printf("Enter Last Name: ");
scanf(" %[^\n]",&last_name);
int N=strlen(first_name)+strlen(last_name)+2;// +2 for space and \0;
//printf("Enter the total number of character in you name: ");
//scanf("%d",&N);
char *arr=(char*)calloc(N,sizeof(char));
if(arr==NULL){
         printf("Error in memory alloction");
         return 1; }
strcpy(arr,first_name);
strcat(arr," ");
strcat(arr,last_name);
printf("Enter you Roll number: ");
scanf(" %[^\n]",&roll_num);
int N2=N+strlen(roll_num)+1;// for space
arr=(char*)realloc(arr,N2*sizeof(char));
if(arr==NULL){
         printf("Error in memory alloction");
         return 1; }
strcat(arr," ");
strcat(arr,roll_num);

printf("Dynamic Array: %s",arr);
free(arr);
}