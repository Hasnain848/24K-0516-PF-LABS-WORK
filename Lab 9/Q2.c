#include<stdio.h>
void swapIntegers(int num1,int num2);
int main () {
	int num1,num2;
	printf("Enter the number 1 = ");
	scanf("%d",&num1);
	printf("Enter the number 2 = ");
	scanf("%d",&num2);
	swapIntegers(num1,num2);
}
void swapIntegers(int num1,int num2) {
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("Enter the number 1 =%d",num1);
	printf("\nEnter the number 2 =%d",num2);
}