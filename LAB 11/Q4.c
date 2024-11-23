/*Create a program that defines a structure Student with fields roll_no, name, and
another nested structure Marks (fields: maths, science, and english). Use an array of
Student to store data for 5 students and calculate the average marks for each student.*/
#include<stdio.h>
struct marks{
	float maths;
	float science;
	float english;
};
struct Student{
	int roll_no;
	char name[20];
	struct marks data;
};
int main(){
	struct Student students[5];
	for(int i=0;i<5;i++){
		
		printf("Enter student %d details\n",i+1);
		printf("Name: ");
		scanf("%s",students[i].name);
		printf("Roll no: ");
		scanf("%d",&students[i].roll_no);
		printf("Maths marks: ");
		scanf(" %f",&students[i].data.maths);
		printf("Science marks: ");
		scanf(" %f",&students[i].data.science);
		printf("English marks: ");
		scanf(" %f",&students[i].data.english);
		printf("----------------------------------\n"); 
	}
	
	for(int i=0;i<5;i++){
		float average=(students[i].data.maths+students[i].data.science+students[i].data.english)/3.0;
		printf("Student %d Average:%.2f\n",i+1,average);
	}
	
	
	
}