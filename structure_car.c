#include<stdio.h>
struct car
{
char id[20];
char model[20];
int rent;
}c[20];
int main()
{
    int n,i,days,total_rent;
    printf("\nInput the number of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nInput the car ID and the model : ");
        scanf(" %[^\n] %[^\n]", c[i].id,c[i].model);
        printf("\nInput rent per day: ");
        scanf("%d",&c[i].rent);
    }
    printf("\nSpecify the number of days: ");
    scanf("%d",&days);
    for(i=0;i<n;i++)
    {
        printf("\nThe total rental cost of the car of model %s is : ",c[i].model);
        total_rent=c[i].rent*days;
        printf("%d",total_rent);
    }
    return 0;
}