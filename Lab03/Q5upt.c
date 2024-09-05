#include<stdio.h>
int main()
{ int a,c,b,x;
  printf("Enter Principal must between 100 to 1000000 : ");
  scanf("%d", & a);
  if (a >=100 && a<=1000000)
     {printf(" Enter Rate of Interest between 5 percent to 10 percent : ");
     scanf("%d", & b);}
     if (b>=5 && b<=10)
        {printf("Enter Time period must between 1 to 10 years : ");
        scanf("%d", & c);}
        if ( c>=1 && c<=10) 
           {x = (a * b * c)/100; // Simple Interest
           printf(" Simple interest is %d", x);}
       else 
          printf("Invalid ");
}

