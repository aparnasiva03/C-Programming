#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/DELL/Desktop/C/programming files/sample 4.txt","w");
	if(fp==NULL){
		printf("file not found");
	}
	int i;
	int roll;
	float cgpa;
	char name[30];
	for(i=0;i<3;i++){
	scanf("%d",&roll);
	scanf("%f",&cgpa);
	scanf("%s",name);
	fprintf(fp,"%d %f %s\n",roll,cgpa,name);
	}
	fclose(fp);
	return 0;
}
