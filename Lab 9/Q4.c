#include<stdio.h>
int basic_arthimetic(int num1,int num2,char opeerator);
int main() {
	int num1,num2,result;
	char opeerator;
	printf("Enter the number 1: ");
	scanf("%d",&num1);
	printf("Enter the number 2: ");
	scanf("%d",&num2);
	printf("Enter the operator(+,-,*,/) : ");
	scanf(" %c",&opeerator);
	result=basic_arthimetic(num1,num2,opeerator);
	printf("Result : %d",result);
}
int basic_arthimetic(int num1,int num2,char opeerator) {
	int c;
	switch(opeerator) {
		case '+':
			c=num1+num2;
			break;
		case '-':
			c=num1-num2;
			break;
		case '*':
			c=num1*num2;
			break;
		case '/':
			c=num1/num2;
			break;
		default :
			printf("invalid operator\n");
			return 0;
	}
	return c;

}



