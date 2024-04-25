#include<stdio.h>
struct class
{
char sec;
struct student
{
char name[40];
int roll;
}s[20];
}c;
int main()
{
int n,i;
printf("\nInput the number of entries: ");
scanf("%d",&n);
printf("\nInput the section: ");
scanf(" %c",&c.sec);
for(i=0;i<n;i++)
{
printf("\nInput the name and roll number of student %d: ",i+1);
scanf(" %[^\n]%d",c.s[i].name,&c.s[i].roll);
}
for(i=0;i<n;i++)
{
printf("\nThe record of students of section %c is as follows:\nName:%s\tRoll:%d\n",c.sec,c.s[i].name,c.s[i].roll);
}
return 0;
}
