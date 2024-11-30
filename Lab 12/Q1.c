#include<stdio.h>
int main(){
    int *p;
    int n;
    printf("Enter the number of array you want: ");
    scanf("%d",&n);
    if(n<0){
        printf("please enter the correct number");
        return 1; 
    }
    int array[n];
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    p =array;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }
    printf("Sum= %d",sum);
    return 0;
}
