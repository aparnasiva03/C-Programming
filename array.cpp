#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	FILE *fp1;
	fp=fopen("C:/Users/DELL/Desktop/C/programming files/arrayelements.txt","r");
	fp1=fopen("C:/Users/DELL/Desktop/C/programming files/evenvalues.txt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	int a[10];
	int i;
	for(i=0;i<6;i++)
	{
		fscanf(fp,"%d",&a[i]);
		if(a[i]%2==0)
		{
			fprintf(fp1,"%d ",a[i]);
		}
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}

