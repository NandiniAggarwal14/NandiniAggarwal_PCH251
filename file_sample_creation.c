#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("Sample.txt","w");
if(fp==NULL)
printf("\nFile could not be created");
else
printf("\nSuccesfully created");
fclose(fp);
return 0;
}
