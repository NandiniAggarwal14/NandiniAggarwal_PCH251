//Structure using pointers sample program
#include<stdio.h>
typedef struct student
{
char name[40];
int roll;
float marks;
}stu;
int main()
{
stu s, *p;
p=&s;
printf("\nInput details of a student: ");
scanf(" %[^\n]%d%f",p->name,&p->roll,&p->marks);
printf("\nThe details of the student are as follows:\n%s\t%d\t%f",p->name,p->roll,p->marks);
return 0;
}

