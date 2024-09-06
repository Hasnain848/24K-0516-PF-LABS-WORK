
#include<stdio.h>
int main ()
{ float a,b,c,x,e,y;
  printf("Enter the car average:");
  scanf("%f", & a);
float fuel_consumed_one_way = 1207/a;   // fuel from A to B 
 float Total_fuel_consumed = 2*fuel_consumed_one_way;
 c = fuel_consumed_one_way * 118;    // fuel cost from A to B
  x = fuel_consumed_one_way * 123;    // fuel cost from B to A
  e = c + x;      //total fuel cost
  printf(" Total fuel cost: %f \n Total Fuel cosumed : %f", e,Total_fuel_consumed);
}
