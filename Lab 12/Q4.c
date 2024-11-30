/*Task 4:
Write a program that ask the user to enter the total &#39;N&#39; no of characters in user&#39;s name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that &#39;N&#39; no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before
Dynamic Array = &quot;Muhib Ahmed&quot;;*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char first_name[30];
char last_name[30];
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
printf("Dynamic Array: %s",arr);
free(arr);
}