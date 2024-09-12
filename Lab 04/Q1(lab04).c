/*Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/
#include<stdio.h>
int main ()
{ int a;
printf("Enter the Number :");
scanf("%d", &a);
if (a%3 == 0)
 printf("The number is the multiple of 3");
else 
printf("The number is not the multiple of 3");
   
}

