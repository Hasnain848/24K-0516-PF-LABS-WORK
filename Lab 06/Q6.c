#include<stdio.h>
int main (){
	int i,rows=6,coloms=5,row,colom;
	for(i=1;i<=rows*coloms;i++){
		row=(i-1)/coloms;
		colom=(i-1)%coloms;
		if(row==1||row==2||row==3||row==4||colom==0 || colom==4)
          printf("* ");
          else printf("  ");
          if (i%5==0)
          printf("\n");

	}
	
	
}
