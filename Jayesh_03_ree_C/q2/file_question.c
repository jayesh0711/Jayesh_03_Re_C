#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
    char ch;
	FILE *fp1 ,*fp2;
	char s[]="C Programming language";
	fp1=fopen("file1.txt","w");
	if(fp1==NULL)
	{
		printf("file cannot exist");
		exit(1);
	}
	for (i=0;i<strlen(s);i++)
	{
		fputc(s[i],fp1);
	}       
    
    fp2=fopen("file2.txt","a+");
    if(fp2==NULL)
	{
		printf("file cannot exist");
		exit(1);
	}
    ch = fgetc(fp1);
    while(!feof)
    {
        printf("%c",ch);
        ch=fgetc(fp1);
        fputc(ch,fp2);

    }
    fclose(fp2);
    fclose(fp1);
}