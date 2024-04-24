#include<stdio.h>
struct circle
{
float radius;
}c[20];
int main()
{
    int n,i;
    float area, perimeter;
    printf("\nInput the number of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nInput thr radius of the circle %d: ",i+1);
        scanf("%f",&c[i].radius);
    }
    for(i=0;i<n;i++)
    {
        printf("\nThe area and perimeter of circle %d is: ",i+1);
        area=3.14*c[i].radius*c[i].radius;
        perimeter=2*3.14*c[i].radius;
        printf("%f and %f",area,perimeter);
    }
    return 0;
}