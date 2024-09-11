#include<stdio.h>

int main(){
	int Num1, Num2, a;
	printf("Enter the Num1: ");
	scanf("%d", & Num1 );

	printf("Enter the Num2:");
	scanf("%d", & Num2);
	a = Num1;
	Num1 = Num2;
	Num2 = a;
	printf("The Swapped Numbers are \n Num1 :%d\n Num2:%d", Num1, Num2);
}
