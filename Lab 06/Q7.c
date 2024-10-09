#include<stdio.h>
int main(){
	int i,row,colom,rows=6,coloms=5,asci=64,asci1=69,asci2=70;
	for(i=1;i<=rows*coloms;i++){
		row=(i-1)/coloms;
		colom=(i-1)%coloms;
		if(row==0 ) 
         {printf("%c ",i+asci);
         }
         else if (colom==0)
         {asci++;
		 printf("%c",1+asci);}
         else if (row==5)  
		 {printf(" %c",1+asci2);
		 asci2++;
		 }
		 else if ( colom ==4)
		 {
		 printf(" %c",1+asci1);
		 asci1++;}
		 else printf("  ");
	    if(i%coloms==0)
		printf("\n"); 		
	}

}
