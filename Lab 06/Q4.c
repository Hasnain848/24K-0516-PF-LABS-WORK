#include<stdio.h>
int main(){
    int orig_num,num,digit,armstrong=0;
	printf("enter the number : \n");
	scanf("%d",&orig_num);
	num=orig_num;
	while (num>0){
	   digit=num%10;
	   armstrong=armstrong+digit*digit*digit;
	   num=num/10;
	   }
	   if (armstrong==orig_num)
	   printf("Given number is armstrong");
	   else printf("Given number is NOT armstrong!");
		}
