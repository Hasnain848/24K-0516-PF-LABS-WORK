#include<stdio.h>
int main () {
	char string[100];
	int i,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	printf("Enter the string : ");
	gets(string);

	for(i=0; string[i]!='\0'; i++) {
		if(string[i]=='a'||string[i]=='A')
			count_a++;

		else if(string[i]=='e'|| string[i]=='E')
			count_e++;

		else if(string[i]=='i'||string[i]=='I')
			count_i++;

		else if(string[i]=='o'||string[i]=='O')
			count_o++;

		else if(string[i]=='u'||string[i]=='U')
			count_u++;
	}

	printf("a=%d ",count_a);
	printf("e=%d ",count_e);
	printf("i=%d ",count_i);
	printf("o=%d ",count_o);
	printf("u=%d ",count_u);
}