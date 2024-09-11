#include<stdio.h>

int main()
{
	int rate, salary, tax, after_tax;
	printf("Enter your salary: ");
	scanf("%d",&salary);
	printf("Enter Tax rate in %: ");
	scanf("%d",&rate);         //calculation and output = tax , money after tax
	tax = (rate/100.00) * salary;
	after_tax = salary - tax;
	printf("Tak Rs: %d\n", tax);
	printf("salary ater tax Rs:%d", after_tax);
}

