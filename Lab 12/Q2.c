/*Task 2: Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);
such that;
b ----> temp
a ----> b
c ----> a
temp -> a  */
#include<stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);
int main(){
    int a,b,c;
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
int *aPtr,*bPtr, *cPtr;
aPtr=&a;
bPtr=&b;
cPtr=&c;
swaped(aPtr,bPtr,cPtr);
printf("After swapping:\n");
printf("a=%d\n",*aPtr);
printf("b=%d\n",*bPtr);
printf("c=%d\n",*cPtr);
}
void swaped(int *aPtr, int *bPtr, int *cPtr){
int temp;
temp=*bPtr;
*bPtr=*aPtr;
*aPtr=*cPtr;
*cPtr=temp;
}