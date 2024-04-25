//Structure using pointer to an array sample program
#include<stdio.h>
typedef struct student
{
char name[40];
int roll;
float marks;
}stu;
int main()
{
stu s[20], *p;
int i,n;
printf("\nInput the number of entries: ");
scanf("%d",&n);
p=s;
for(i=0;i<n;i++)
{
printf("\nInput name,roll number and marks of student %d: ",i+1);
scanf(" %[^\n]%d%f",(p+i)->name,&(p+i)->roll,&(p+i)->marks);
}
for(i=0;i<n;i++)
{
printf("\nThe details of the student %d are as follows:\n%s\t%d\t%0.2f",i+1,(p+i)->name,(p+i)->roll,(p+i)->marks);
}
return 0;
}
