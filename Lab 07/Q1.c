#include<stdio.h>
int main() {
	int size,last_element,i;

	printf("Enter the size of array");
	scanf("%d",&size);
	int arr[size];
	for(i=0; i<size; i++) {
		printf("Element %d =  ",i);
		scanf("%d",&arr[i]);
	}
	printf("Your given array : ");
	for(i=0; i<size; i++) {
		printf("%d",arr[i]);
	}
	last_element=arr[size-1];
	for(i=size-1; i>0; i--) {
		arr[i]=arr[i-1];
	}
	arr[0]=last_element;

	printf("\nRight shifted  array : ");
	for(i=0; i<size; i++) {
		printf("%d",arr[i]);
	}


}