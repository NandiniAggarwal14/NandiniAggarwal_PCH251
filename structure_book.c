#include<stdio.h>
struct book
{
char title[40];
char author[40];
float price;
}b[20];
int main()
{
int n,i,lg,sm;
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
sm=0;
lg=0;
for(i=0;i<n;i++)
{
if(b[i].price>lg)
lg=i;
if(b[i].price<sm)
sm=i;
}
printf("\nThe book with the highest price is : %s %s %f",b[lg].title,b[lg].author,b[lg].price);
printf("\nThe book with the lowest price is : %s %s %f",b[sm].title,b[sm].author,b[sm].price);
return 0;
}
