#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int roll;
	char name[10];
	int m1,m2,m3;
	fp=fopen("C:/Users/anuli/OneDrive/Desktop/amrita/cse102/file/sam 4.txt","r");
	if(fp==NULL)
	{
		printf("file not opened\n");
	}
	fscanf(fp,"%d%s%d%d%d",&roll,&name,&m1,&m2,&m3);
	fprintf("%d%s%d%d%d",roll,name,m1,m2,m3);
fclose(fp);
}
