#include<stdio.h>
struct student
{
char name[40];
int age;
float marks;
};
int main()
{
struct student s[20];
int n,i;
float sum=0.0,avg;
printf("\nInput the number of entries: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nInput the name, age and total marks of student %d: ",i+1);
scanf("%s%d%f",s[i].name,&s[i].age,&s[i].marks);
}
for(i=0;i<n;i++)
{
printf("\nThe details of the students are as follows :\nName:%s Age:%d Total marks:%f\n",s[i].name,s[i].age,s[i].marks);
}
for(i=0;i<n;i++)
{
sum=sum+s[i].marks;
}
avg=sum/n;
printf("\nThe average marks of the students is: %f",avg);
return 0;
}
