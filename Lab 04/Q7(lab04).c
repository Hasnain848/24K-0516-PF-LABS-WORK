#include<stdio.h>
int main ()
{ int  a,u;
 char n[100];
 float unit_price,Amount_charges,surcharge,Net_Amount;
 printf("Enter the Customer Id :\n");
 scanf("%d", &a);
 printf("Enter The Customer Name: \n");
 scanf("%s", &n);
 printf("Enter the Units consumed : \n");
 scanf("%d", &u);
 if ( u<=199 )
  unit_price = u*16.20;
     else if (u>=200 && u<300)
     unit_price = u*20.10;
         else if(u>=300 && u<500)
         unit_price = u*27.10;
             else if (u>=500)
			 unit_price = u*35.90;
			
			 
 Amount_charges = unit_price;
 if (Amount_charges>18000)			
      {
	  surcharge = (Amount_charges*15)/100;  
      Net_Amount = surcharge+Amount_charges;
	  printf("Customer ID : %d \n Customer Name : %s \n Unit consumed : %d \n ",a,n,u);
      printf(" Amount charges : %f \n surcharge : %f \n Net amount : %f ",Amount_charges,surcharge,Net_Amount);
	   }
 else
{
 Net_Amount = Amount_charges;
printf("Customer ID : %d \n Customer Name : %s \n Unit consumed : %d \n ",a,n,u);
printf(" Amount charges : %f ",Net_Amount);}
}


 
 

