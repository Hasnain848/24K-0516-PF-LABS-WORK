#include<stdio.h>
int main () {
	int arry[3][3],saddle[3];
	int i,j,k,colom,u=0;
	printf("Eneter the 3x3 matrice \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("Enter the elment of row %d and colom %d : ",i+1,j+1);
			scanf("%d",&arry[i][j]);
		}
	}
	for(i=0; i<3; i++) {
		int saddlepoint=1;
		int min=arry[i][0];
		colom=0;
		for(j=0; j<3; j++) {
			if(arry[i][j]<min) {
				min =arry[i][j];
				colom=j;
			}
		}
		for(k=0; k<3; k++) {
			if(arry[k][colom]>min) {
				saddlepoint=0;
				break;
			}
		}
		if(saddlepoint) {

			saddle[u]=min;
			u++;
		}
	}
	printf("saddle points are : ");
	for(i=0; i<u; i++) {
		printf("%d,",saddle[i]);
	}
}