#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/DELL/Desktop/C/programming files/sample 2.txt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	char str[]="amrita";
	int i;
	for(i=0;i<6;i++)
	{
		fputc(str[i],fp);
	}
	fclose(fp);
}
