/*2. Write a C program which asks the user for an input (any number) and only
accepts numbers that are (positive, multiple of 2 and divisible by 10). Any
other number should be discarded (Write the condition in a single statement
no nesting)*/
#include<stdio.h>
int main()
{ int a;
printf("Enter the Number ");
scanf("%d", &a);
if (a>0 && a%2==0 && a%10==0)
  printf("Yes the number is acceptable");
 else 
 printf("The number is not acceptable"); 
}
