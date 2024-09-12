/*3. Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/
#include<stdio.h>
int main ()
{int a,b; 
printf("Enter the Num1 :");
scanf("%d",& a);
printf("Enter the Num2 :");
scanf("%d",& b);	
char operator;
printf("Enter the operator:");	
scanf(" %c", &operator);
 switch (operator)
  {case '+':
  	printf("The sum of two numbers is %d",a + b);
  	break;
   case '-':
   	printf("The difference of two numbers is %d",a - b);
	   break; 	
   case '*':
   	 printf("The multiplication of two numbers is %d",a * b);
   	 break;
   case '/':
   	 printf("The division of two numbers is %d",a /b);
   	 break;
   default:
    printf("invalid operator");	 
  }
}
