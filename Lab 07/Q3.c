#include<stdio.h>
int main() {
	int count=0;
	char string[100],*ptr;
	printf("Enter the string : ");
	gets(string);
	ptr=string;
	while(*ptr!='\0') {
		count++;
		ptr++;
	}
	printf("Length of string is : %d ",count);
	printf("\nReversed string is : ");
	for(int i=count; i>=0; i--) {
		printf("%c",string[i]);
	}

}