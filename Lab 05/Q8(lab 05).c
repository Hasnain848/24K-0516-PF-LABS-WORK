#include<stdio.h>
int main()
{   char section;
    int a,registertion_no,semester,ar,current_year=24;
	printf("Enter the Roll number(i.e 240516) : ");
	scanf("%d",&a);
	registertion_no = a/10000;
	semester = (current_year -registertion_no) * 2 + 1;
	ar = a/1000;
	section=ar%10==1?'A'
	:ar%10==2?'B'
	:ar%10==3?'C'
	:ar%10==4?'D'
	:ar%10==5?'E'
	:ar%10==6?'F'
	:ar%10==7?'G'
	:ar%10==8?'H'
	:ar%10==9?'I'
	:'X';
	printf(" registeration year :20%d \n semester :%d \n Section :%c",registertion_no,semester,section);
}
