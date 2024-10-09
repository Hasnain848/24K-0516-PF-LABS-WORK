#include<stdio.h>
int main(){
	int i,num,depender=1,a,first=0,second=1,fabonacci=0;
	printf("Enter the Number : \n");
	scanf("%d",&num);
	if (num==0)
	printf("neither prime nor composite");
	else{
  for(i=2;i<num;i++){
  	depender=depender*(num%i);
  	}
	if (depender==0)
	     printf("not prime\n");
	else
	     {printf("prime\n");
         for(a=1;a<=num;a++){
     	  if (a==1)
     	 printf("%d,",first);
     	 else if (a==2)
     	 printf("%d,",second);
     	 else
     	  {
		   fabonacci=first+second;
     	  printf("%d,",fabonacci);
     	  first=second;
     	  second=fabonacci;}
	      }} }
	
}
