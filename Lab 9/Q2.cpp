#include<stdio.h>
#include<string.h>
void strreverse(char array[]);
int main (){
	char array[]="hello";
	strreverse(array);
	printf("%s",array);
}
void strreverse(char array[]){
	int size=strlen(array),i;
	for(i=0;i<size/2;i++){
		char temp=array[i];
		array[i]=array[size-1-i];
		array[size-1-i]=temp;
	}
	
}
