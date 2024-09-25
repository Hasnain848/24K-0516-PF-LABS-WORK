#include<stdio.h>
int main()
{
int x;
x=5>8?10:1!=2<5?20:30;
printf("Value of x:%d", x);
}
	
 /*ANS:	
	The output is 30 because when we check 5>8 it is false so we move onto the else part
	of ternary operators now we have to check 1!=2<5 in this senarion since we have   more 
	than one operators so we used the operators precedence which will evaluate 2<5 first and
	it will give 1 (because it is true) then check  1!=1 which is false so that why the output
	is 30 due operator precedence  */
	
 
