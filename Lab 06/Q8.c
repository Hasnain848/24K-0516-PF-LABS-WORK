#include<stdio.h>
int main(){
	int rows=5,coloms=5,row,colom,i,asci=64,asci1=68;
	for (i=1;i<=rows*coloms;i++){
		row=(i-1)/coloms;
		colom=(i-1)%coloms;
		if (row == 0)
		 {printf("%c ",1+asci);
		 asci++;}
		else if(row==4)
		{printf("%c ",1+asci1);
		 asci1++;}
		 else if (row==1&&colom==1)
		 printf("  %c",67);
		 else if(row==1&&colom==3)
	     printf("   %c",70);
	     else if(row==3&&colom==1)
	     printf("  %c",69);
	     else if(row==3&&colom==3)
	     printf("   %c",72);
	     else if(row==2&&colom==2)
	     printf("    %c",69);
	    if(i%coloms==0)
		printf("\n"); 		
	
	}
	
}

