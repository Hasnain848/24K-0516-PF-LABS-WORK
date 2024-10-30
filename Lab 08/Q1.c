#include<stdio.h>
int main () {
	int start,end,prime=1,m=0;
	printf("Enter the starting point: ");
	scanf("%d",&start);
	printf("Enter the ending point: ");
	scanf("%d",&end);
	int arry[end];
	for(int i=start; i<end; i++) {
		prime=1;
		if(i<2) {
			continue;
		}
		for(int j=2; j<i; j++) {

			if(i%j==0)
				prime=0;
			break;
		}
		if(prime==1) {
			arry[m]=i;
			m++;
			n
		}
	}
	printf("The prime numbers between %d and %d are = ",start,end);
	for(int k=0; k<m; k++) {
		printf("%d,",arry[k]);
	}

}