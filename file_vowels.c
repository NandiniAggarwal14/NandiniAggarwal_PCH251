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
printf("\nThe vowels in the file are:\n");
while((ch=fgetc(fp))!=EOF)
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("%c",ch);
}
}
fclose(fp);
}
return 0;
}
