#include<stdio.h>
int main() {
	int row,k=1,j;

	printf("Enter the number of rows : ");
	scanf("%d",&row);
	for(int i=1; i<=row; i++) {
		for(int j=0; j<row-i; j++) {
			printf(" ");
		}
		for(int k=0; k<i; k++) {
			printf("* ");

		}
		printf("\n");

	}
	for(int i=row-1; i>=1; i--) {
		for(int j=row-i; j>0; j--) {
			printf(" ");
		}
		for(int k=0; k<i; k++) {
			printf("* ");

		}
		printf("\n");

	}

}