#include<stdio.h>
int main (){
	int i,n=6,a=5,row,colom;
	
	for(i=1;i<=30;i++){
		row =(i-1)/a;
		colom=(i-1)%a;
		if(row == 0 || row == n-1 ||colom == 0 || colom == a-1)
		  printf("* ");
		  else 
		    printf("  ");
		if(i%a == 0)
	   	  printf("\n");

	}
return 0;
}
