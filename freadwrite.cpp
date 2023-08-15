int main()
{
FILE *FP;
int v[4]={5214,34,67,56};
int v1[4];
FP=fopen("New","w");
int k= fwrite(v,sizeof(v),1,FP);
printf("%d\n",k);
fclose(FP);
FP=fopen("New","r");
fread(v1, sizeof(v1), 1, FP);
for(int i=0;i<4;i++)
{
printf("%d\n",v1[i]);
}
return 0;
}
fread(&val, sizeof(int), 1, fp);//float
fread(arr, sizeof(arr), 1, fp);//array frm file
fread(arr, sizeof(int), 5, fp);//fst 5 ele frm file
fread(&student_1, sizeof(student_1), 1, fp);//elements of struct frm file
fwrite(arr, sizeof(arr), 1, fp);
fwrite(students, sizeof(students), 1, fp);
puts(str, fpw);
gets(str, 10, fpr);
