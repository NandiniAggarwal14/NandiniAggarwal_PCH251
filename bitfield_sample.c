#include<stdio.h>
struct dob
{
unsigned int dd:5, mm:4, yyyy:11;
}date[30];
int main()
{
int i,n, d,m,y;
printf("\nInput the number of entires: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the date of birth of person %d: ",i+1);
scanf("%u%u%u",&d,&m,&y);
date[i].dd=d;
date[i].mm=m;
date[i].yyyy=y;
}

for(i=0;i<n;i++)
{
printf("\nThe date of birth of person %d: ",i+1);
printf("%u/%u/%u",date[i].dd,date[i].mm,date[i].yyyy);
}
return 0;
}

