#include<stdio.h>
int main()
{
    int a[20],b[20],m,n,*p1,*p2,i;
    printf("\nInput number of array elements in first array: ");
    scanf("%d",&m);
    printf("\nInput number of array elements in second array: ");
    scanf("%d",&n);
    p1=a;
    p2=b;
    printf("\nEnter first array elements: ");
    for(i=0;i<m;i++)
    scanf("%d",(p1+i));
    printf("\nEnter second array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",(p2+i));
    for(i=0;i<n;i++)
    {
        *(p1+m)=*(p2+i);
        m++;
    }
    printf("\nThe new merged array is:\n");
    for(i=0;i<m;i++)
    {
        printf("%d ",*(p1+i));
    }
    return 0;
}