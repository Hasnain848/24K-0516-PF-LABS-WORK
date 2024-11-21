#include<stdio.h>
int main(){
int n[100],i=0;

FILE *fptr=fopen("input.txt","r");
 if(fptr==NULL){
 	printf("error");
 	return 1;
 }
while(fscanf(fptr,"%d",&n[i])!=EOF){
	i++;
}
fclose(fptr);
FILE *fptr2=fopen("result.txt","a");
 if(fptr2==NULL){
 	printf("error");
 	return 1;}
 	for(int j=0;j<i;j++){
 		fprintf(fptr2,"%d\n",n[j]);
	 }
return 0;

}