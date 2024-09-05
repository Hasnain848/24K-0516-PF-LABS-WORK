#include<stdio.h>
int main ()
{ float a,b,c,x,e,y;
  printf("Enter the car average:");
  scanf("%f", & a);
  b = a * 1207;   // fuel from A to B and B to A
  c = b * 118;    // fuel cost from A to B
  x = b * 123;    // fuel cost from B to A
  e = c + x;      //total fuel cost
  y = 2*b;        // total fuel consumed
  printf(" Total fuel cost: %f \n Total Fuel cosumed : %f", e,y);
}