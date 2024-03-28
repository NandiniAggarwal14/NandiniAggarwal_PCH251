#include<stdio.h>
#include<string.h>
void sort(char [],int);
int compare(char [], char [], int, int);
int main()
{
    char str1[40],str2[40];
    int l1,l2,res=0;
    printf("\nEnter first string: ");
    fgets(str1,40,stdin);
    printf("\nEnter second string: ");
    fgets(str2,40,stdin);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1!=l2)
    res=1;
    else
    {
        sort(str1,l1);
        sort(str2,l2);
        res=compare(str1,str2,l1,l2);
    }
    if(res==0)
    printf("\nAnagram");
    else
    printf("\nNot Anagram");
    return 0;
}
void sort(char str[],int l)
{
    int i,j;
    char tmp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(str[j]<str[j+1])
            {
                tmp=str[j];
                str[j]=str[j+1];
                str[j+1]=tmp;
            }
        }
    }
}
int compare(char str1[], char str2[], int l1, int l2)
{
    int f=0,i;
    for(i=0;i<l1;i++)
    {
        if(str1[i]!=str2[i])
        {
            f=1;
            break;
        }
    }
    return f;
}