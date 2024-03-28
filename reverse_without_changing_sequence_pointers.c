#include <stdio.h>
#include<string.h>
int main()
{
    int i,a,j=0,p;
    char s[40],tmp,st[40],*ptr,*ptr2;
    printf("Enter string:\n");
    fgets(s,40,stdin);
    a=strlen(s);
    ptr=&s[0];
    ptr2=&st[0];
    for(i=0;*(ptr+i)!='\0';i++)
    {
       
     if(*((ptr+i)+1)==' '||*((ptr+i)+1)=='\0'||*((ptr+i)+1)=='\n')
        {
            p=i;
            while(*(ptr+p)!=' '&& p>=0)
            {
                *(ptr2+j)=*(ptr+p);
                j++;
                p--;
            }
            *(ptr2+j)=' ';
            j++;
        }
    }
    *((ptr2+j)-1)='\0';
    printf("new string formed is \n");
    for(i=0;i<a;i++)
    {
        printf("%c",*(ptr2+i));
    }
    return 0;
}