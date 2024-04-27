#include<stdio.h>
struct student
{
char name[40];
int age;
float marks;
};
int main()
{
struct student s[20],tmp;
int n,i,j;
printf("\nInput the number of entries: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nInput the name, age and total marks of student %d: ",i+1);
scanf(" %[^\n]%d%f",s[i].name,&s[i].age,&s[i].marks);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(s[j].marks>s[j+1].marks)
{
tmp=s[j];
s[j]=s[j+1];
s[j+1]=tmp;
}
}
}
for(i=0;i<n;i++)
{
printf("\nThe details of student %d are as follows:%s\t%d\t%f",i+1,s[i].name,s[i].age,s[i].marks);
}
return 0;
}
