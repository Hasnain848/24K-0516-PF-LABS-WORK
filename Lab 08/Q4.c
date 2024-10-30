#include<stdio.h>
int main () {
	int mat3[3][3],i,j,k;
	int mat1[3][3]= {{1,2,3}
		,{4,5,6}
		,{7,8,9}
	};

	int mat2[3][3]= {{1,8,9}
		,{4,5,6},
		{1,2,3}
	};
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			mat3[i][j]=0;
			for(k=0; k<3; k++) {
				mat3[i][j]=mat3[i][j]+(mat1[i][k]*mat2[k][j]);
			}
		}
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
}