#include<stdio.h>
int main()
{
char ch;
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
printf("\nThe content of the file are:\n");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
}
fclose(fp);
return 0;
}
