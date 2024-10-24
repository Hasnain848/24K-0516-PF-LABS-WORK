#include<stdio.h>
int main () {
	int arr[10],i;
	int frequency[100]= {0};
	printf("Enter the 10 numbers between 1 tp 99:\n ");
	for(i=0; i<10; i++) {
		printf("Element %d = ",i+1);
		scanf("%d",&arr[i]);
		frequency[arr[i]]++;
	}
	for(i=0; i<=99; i++) {
		if(frequency[i]>0)
			printf("number %d entered %d times\n ",i,frequency[i]);
	}
}