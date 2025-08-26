//Structure
//1. Student (rollNo, name, marks)
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;	
};
void main()
{
	struct student s1,s2;
	
	s1.rollno=101;
	strcpy(s1.name,"swami");
	s1.marks=75;
	printf("rollno=%d name=%s marks=%d",s1.rollno,s1.name,s1.marks);
	
	printf("\n Enter the student 2 values");
	scanf("%d",&s2.rollno);
	scanf("%s",&s2.name);
	scanf("%d",&s2.marks);
	printf("rollno=%d name=%s marks=%d",s2.rollno,s2.name,s2.marks);
}