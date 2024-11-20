//Write a recursive function that takes an array and its size as input and prints all the
//elements.
#include<stdio.h>
int recursive(int array[],int size);
int main(){ int n,i;
	printf("Enter the size of array you want : ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("element %d : ",i+1);
		scanf("%d",&array[i]);
	}
	recursive(array,n);
}
int recursive(int array[],int size){
	if (size==0){
		return ;
	}else
	{
	printf("%d ",array[0]);
	recursive(array+1,size-1);}
}
