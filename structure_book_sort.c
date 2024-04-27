#include<stdio.h>
struct book
{
char title[40];
char author[40];
float price;
}b[20],tmp;
int main()
{
int n,i,j;
printf("\nInput the number of entries: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nInput the name of the book %d:",i+1);
scanf(" %[^\n]",b[i].title);
printf("\nInput the author of book %d: ",i+1);
scanf(" %[^\n]",b[i].author);
printf("\nInput the price of book %d: ",i+1);
scanf("%f",&b[i].price);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(b[j].price>b[j+1].price)
{
tmp=b[j];
b[j]=b[j+1];
b[j+1]=tmp;
}
}
}
for(i=0;i<n;i++)
{
printf("\nThe details of book %d are as follows:%s\t%s\t%f",i+1,b[i].title,b[i].author,b[i].price);
}
return 0;
}
