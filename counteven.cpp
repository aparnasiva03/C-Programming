#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	FILE *fp1;
	fp=fopen("C:/Users/DELL/Desktop/C/file programming/array.txt","r");
	fp1=fopen("C:/Users/DELL/Desktop/C/file programming/counteven.txt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	int a[10];
	int i,c=0;
	for(i=0;i<6;i++)
	{
		fscanf(fp,"%d",&a[i]);
		fprintf(fp1,"%d ",a[i]);
		if(a[i]%2==0)
		{
			c=c+1;
		}
	}
		fprintf(fp1,"\n%d",c);
	fclose(fp);
	fclose(fp1);
	return 0;
}
