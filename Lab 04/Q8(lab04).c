#include<stdio.h>
int main ()
{ int n;
 printf("Enter the positive Integer: ");
 scanf("%d", &n);
  if (n > 0)
     if (n>=1 && n<=9)
        {switch (n)
         {case 1 :
		     printf("One\n");
			break ;
		  case 2 :
		  	printf("Two\n");
			break ;
		  case 3 :
		  	printf("Three\n");
			break ;
		  case 4 :
		  	printf("Four\n");
			break ;
		  case 5 :
		  	printf("Five\n");
			break ;
		  case 6 :
		  	printf("Six\n");
			break ;
		  case 7 :
		  	printf("Seven\n");
			break ;
		  case 8 :
		  	printf("Eight\n");
			break ;
		  case 9 :
		  printf("Nine\n");
			break ;	 }}
	 else if  (n>9)	 
	    printf(" greater than 9 ");
else 
     {
	 printf("Please Enter Positive Integer ");}
}
		
	
	
	
	

