#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int rollno;
	float cgpa;
	char name[10];
	scanf("%d",&rollno);
	scanf("%f",&cgpa);
	scanf("%s",name);
	fp=fopen("C:/Users/DELL/Desktop/C/programming files/sample 3.txt","w");
	if(fp==NULL)
	{
		printf("File not opened");
	}
	fprintf(fp,"%d %f %s",rollno,cgpa,name);
	fclose(fp);
	return 0;
}
