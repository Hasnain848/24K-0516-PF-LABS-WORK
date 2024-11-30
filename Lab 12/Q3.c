/*Task 3:
Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and
then resized by the user
Example arr[5]={1,2,3,4,5}
//After resizing
Arr[7]={1,2,3,4,5,6,7}
Take the same array and resize it.*/
#include<stdio.h>
#include<stdlib.h>
int gratestnum(int *arr,int size);
int main(){
    int n,result;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("Error in memory alloction");
        return 1;
    }
    for(int i=0;i<n;i++){
    printf("Element %d: ",i+1);
    scanf("%d",&arr[i]);
}
char c;
printf("Do you want to resize it (y/n): ");
scanf(" %c",&c);
if(c=='y'){
         int n2;
         printf("enter the new size: ");
         scanf("%d",&n2);
         arr=(int*)realloc(arr,n2*sizeof(int));
         if(arr==NULL){
         printf("Error in memory alloction");
         return 1; }
          for(int i=0;i<n2;i++){
          printf("Element %d: ",i+1);
          scanf("%d",&arr[i]);}
         result=gratestnum(arr,n2);
         printf("The greatest number is: %d",result);
         return 0;

}
else if(c =='n'){
result=gratestnum(arr,n);
printf("The greatest number is: %d",result);
return 0;
}


}
int gratestnum(int *arr,int size){
int max=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;

}