#include<stdio.h>
int main()
{
char str[40];
FILE *fp;
fp=fopen("Sample.txt","w");
if(fp==NULL)
printf("\nFile could not be created");
else
{
printf("\nEnter the characters: ");
while(fgets(str,40,stdin)!='\0')
{
fputs(str,fp);
}
fclose(fp);
fp=fopen("Sample.txt","r");
printf("\nThe content of the file are:\n");
while(fgets(str,40,fp)!='\0')
{
printf("%s",str);
}
}
fclose(fp);
return 0;
}
