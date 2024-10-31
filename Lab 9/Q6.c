#include<stdio.h>
void min_max_value(int array[],int size,int *min, int *max);
int main () {
	int n,min,max,i;
	printf("Enter the no of array = ");
	scanf("%d",&n);
	int array[n];
	for(i=0; i<n; i++) {
		printf("Element %d = ",i+1);
		scanf("%d",&array[i]);
	}
	min=array[0];
	max=array[0];

	min_max_value(array,n,&min,&max);
	printf("Minimun element = %d",min);
	printf("\nMaximun element = %d",max);
}
void min_max_value(int array[],int size,int *min, int *max) {
	int i;
	for(i=0; i<size; i++) {
		if(array[i]>min) {
			*min=array[i];
		}
	}
	for(i=0; i<size; i++) {
		if(array[i]<max) {
			*max=array[i];
		}
	}

}