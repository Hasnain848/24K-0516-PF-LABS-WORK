
#include<stdio.h>
#include<string.h>
void is_palindrome(char array[5][20]);
int main (){
	int i;
char array[5][20]; 
printf("enter words you want to check\n");	
for(i=0;i<5;i++){
	printf("row %d = ",i+1);
	scanf("%s",&array[i]);
	
}

	is_palindrome(array);
}
void is_palindrome(char array[5][20]){
int i,palindrome,j;
for(i=0;i<5;i++){
	palindrome=1;
	int length=strlen(array[i]);
	for(j=0;j<length/2;j++){
		if(array[i][j]!=array[i][length-1-j]){
			palindrome=0;
		}
}
	
	if(palindrome){
		printf("%s is palindrome\n",array[i]);
	}

}}
		
	

