#include<stdio.h>
int main (){
	char c[100];
	int i=0;
	int frequency[256]= {0};
	FILE *fptr=fopen("sample.txt","r");
	if(fptr==NULL){
		printf("error");
		return 1;
	}
	while((c[i]=fgetc(fptr))!=EOF){
		if(c[i]!=' '){
		frequency[c[i]]++;
		}
		i++;
	}
	c[i]='\0';
	fclose(fptr);
	printf("original file: ");
	for(int j=0;j<i;j++){
	printf("%c",c[j]);
	}
	printf("\nOccurences are:\n");
	for(int k=0;k<256;k++){
	if(frequency[k]>0){
		
		printf("%c = %d\n",k,frequency[k]);
	}
		
	}
}