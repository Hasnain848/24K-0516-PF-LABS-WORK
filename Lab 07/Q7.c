#include<stdio.h>
#include<string.h>
int main (){int result=0,num=0,i;
	char expression[100];
	char default_opert= '+';
	
	printf("It is the simple calculator than performs Addition and Subtraction");
	printf("\nEnter the expression : ");
	scanf("%s",&expression[0]);
	int size= strlen(expression);


	for(i=0;i<size;i++){
		if(expression[i]>='0'&&expression[i]<='9')
		num=num*10+(expression[i]-48);
		else if (expression[i]=='+'||expression[i]=='-')
		   { if(i==0)
		   {
		   result=num;}
		   else 
		   {result=result+num;}
		   num=0;
		   if(expression[i]=='-'){
		   	result=result-num;
		   	default_opert='-';
		   }
		   }
		   } 
if (default_opert=='+')
	result=result+num;
else if(default_opert=='-')
	result=result-num;
	
 printf("%d",result);
 return 0;
	}
	
          

