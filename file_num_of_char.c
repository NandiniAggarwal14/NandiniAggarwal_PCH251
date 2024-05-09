#include<stdio.h>
int main()
{
char ch;
int n;
FILE *fp;
fp=fopen("Sample.txt","w");
if(fp==NULL)
printf("\nFile could not be created");
else
{
printf("\nEnter the characters: ");
while((ch=getchar())!=EOF)
{
fputc(ch,fp);
}
fclose(fp);
fp=fopen("Sample.txt","r");
fseek(fp,0,2);
n=ftell(fp);
printf("\n%d",n);
fclose(fp);
}
return 0;
}
