#include<stdio.h>
int linear_search(int array[],int size,int target,int current_index);
int main() {
	int array[]= {23,1,54,13,9,10,80};
	int size=sizeof(array)/sizeof(array[0]);
	int target,current_index,result;
	printf("Enter the target number to check: ");
	scanf("%d",&target);
	printf("The current index at which you want to check: ");
	scanf("%d",&current_index);
	result=linear_search(array,size,target,current_index);
	if(result)
		printf("\nthe target %d is found at index %d",target,result);
	else
		printf("\nTarget %d not found in the array.\n", target);
	return 0;
}
int linear_search(int array[],int size,int target,int current_index) {
	if(current_index>size)
		return -1;

	if(array[current_index]==target)
		return current_index;

	linear_search(array,size,target,current_index+1);
}