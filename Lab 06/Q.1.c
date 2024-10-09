/*i think the most suitable loop system for taking repeated user input is a while loop because it runs until a specified condition
becomes false. In the case of user input, you want to continuously prompt for values until the user enters a specific input 
(in this case, zero). The while loop is ideal because it checks the condition before each iteration and will continue as long 
as the condition remains true.
*/
#include<stdio.h>
int main ()
{ int a,sum=0;
while(a!=0)
{ printf("Enyer the number :\n");
  scanf("%d",&a);
  sum=sum+a;
  
}
	
printf("sum= %d",sum);	
}
