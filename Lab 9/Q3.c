#include<stdio.h>
void checkprime(int num);
int main() {
	int num;
	printf("The program is to check the number is prime or not");
	printf("\nEnter the number = ");
	scanf("%d",&num);
	checkprime(num);
}
void checkprime(int num) {
	int isprime=1,i;
	if(num<2) {
		isprime=0;
	}
	for(i=2; i<num; i++) {
		if(num%i==0) {
			isprime=0;

		}
	}
	if(isprime) {
		printf(" Prime");
	} else {
		printf(" Not prime");
	}
}