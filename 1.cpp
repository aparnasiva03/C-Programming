#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/DELL/Desktop/C/programming files/sample 1.txt","r");
if(fp==NULL)
{
	printf("File not found\n");
}
char ch;
while(ch==EOF)
{
	ch=fgetc(fp);
	printf("%c",ch);
}
fclose(fp);
}

