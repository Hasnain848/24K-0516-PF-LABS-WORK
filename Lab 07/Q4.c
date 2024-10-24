#include<stdio.h>
int main () {
	int i,j=0,count=0,palidrome=1;
	char string[100],*ptr,re_string[100];
	printf("Enter the string: ");
	gets(string);
	ptr=string;
	while(*ptr!='\0') {
		count++;
		ptr++;
	}
	for(i=count-1; i>=0; i--) {
		re_string[j]=string[i];
		j++;
	}
	re_string[j]= '\0';
	for(int k=0; k<count; k++) {
		if(string[k]!=re_string[k]) {
			palidrome=0;
			break;
		}
	}
	if (palidrome)
		printf("\nPalindrome");
	else
		printf("\nnot palindrome");
}