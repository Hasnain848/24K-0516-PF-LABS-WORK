/*6. An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/
#include <stdio.h>
int main ()
{
float amount_after_discount,saved_amount,cost;
 printf("Enter the Cost :");
 scanf("%d",&cost);
 
if (cost>=500 && cost<2000){
     saved_amount = (5*cost)/100;
     amount_after_discount= cost - saved_amount;
     printf("The Actual amount is: %f \n The saved amount : %f \n The Amount after discount : %f",cost,saved_amount,amount_after_discount);}
else if (cost>=2000 && cost<4000)
     {
	 saved_amount = (10*cost)/100;
     amount_after_discount= cost - saved_amount;
     printf("The Actual amount is: %f \n The saved amount : %f \n The Amount after discount : %f",cost,saved_amount,amount_after_discount);}
else if (cost>=4000 && cost<6000)
     {
		  saved_amount = (20*cost)/100;
     amount_after_discount= cost - saved_amount;
     printf("The Actual amount is: %f \n The saved amount : %f \n The Amount after discount : %f",cost,saved_amount,amount_after_discount);}
else if (cost>=6000)
    {
	 saved_amount = (35*cost)/100;
     amount_after_discount= cost - saved_amount;
     printf("The Actual amount is: %f \n The saved amount : %f \n The Amount after discount : %f",cost,saved_amount,amount_after_discount); }
	
	
	
	
	
}
