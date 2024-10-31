#include<stdio.h>
#include<string.h>
void sorted_array(char array[5][10],int size);
int main (){int i;
	char array[5][10];
	for(i=0;i<5;i++){
	printf("string %d :",i+1);
	scanf("%s",array[i]);
	}
	
	sorted_array(array,5);
	for(i=0;i<5;i++){
	printf("string %d : %s\n",i+1,array[i]);
	
	}
}
void sorted_array(char array[5][10],int size){
    int i,j;
	char copy[10];
   
    for(i=0;i<size-1;i++){
    	for(j=i+1;j<size;j++){
      	if(strcmp(array[i],array[j])>0)
    	{strcpy(copy,array[i]);
    	strcpy(array[i],array[j]);
    	strcpy(array[j],copy);
    }

	}
}}