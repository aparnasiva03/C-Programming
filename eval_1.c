#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	char c;
	fp1=fopen("C:/Users/DELL/Desktop/f1.txt","r");
	fp2=fopen("C:/Users/DELL/Desktop/f2.txt","r");
	fp3=fopen("C:/Users/DELL/Desktop/f3.txt","w");
	if(fp1==NULL)
	{
		printf("File not found");
	}
	if(fp2==NULL)
	{
		printf("File not found");
	}
	if(fp3==NULL)
	{
		printf("File not found");
	}
    c=getc(fp1);
    while(c!=EOF)
    {
    	if (c>='a'&&c<='z')
    	{
    		fputc(c,fp3);
		}
		c=getc(fp1);
	}
	c=getc(fp2);
    while(c!=EOF)
    {
    	if (c>='0'&&c<='9')
    	{
    		fputc(c,fp3);
		}
		c=getc(fp2);
	}
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}



