#include<stdio.h>
int main () {
	int i,n,j,duplicate;
	int frequency[100]= {0};

	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for( i=0; i<n; i++) {
		printf("Element %d = ",i+1);
		scanf("%d",&arr[i]);
		frequency[arr[i]]++;

	}
	for(i=0; i<100; i++) {
		if (frequency[i]>1)
			printf("Number %d occur more than once\n ",i);
	}

}

