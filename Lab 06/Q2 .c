#include<stdio.h>
int main(){
	int i,num,depender=1;
	printf("Enter the Number : \n");
	scanf("%d",&num);
  for(i=2;i<num;i++){
  	depender=depender*(num%i);
  	}
	if (depender==0)
	printf("not prime");
	else
	printf("prime");
}
