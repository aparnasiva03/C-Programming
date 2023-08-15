// C program to understand fread and fwrite functions 
//for reading and writing binary files.
#include<stdio.h>
struct student{
   int sno;
   char sname [30];
};
int main ( ){
   struct student s,d;
   int i;
   FILE *fp;
   fp = fopen ("C:/Users/DELL/Desktop/C/programming files/structure.txt", "wb");
   
      printf("student number:");
      scanf("%d",&s.sno);
      printf("student name:");
      scanf("%s",s.sname);
      fwrite(&s, sizeof(s),1,fp); // writing the contents of  student s into file.
   
   fclose(fp);
   fp = fopen ("C:/Users/DELL/Desktop/C/programming files/structure.txt", "rb");
   
      fread(&d, sizeof(d),1,fp); // read the contents from the  file and stored in the student variable d..
      printf("%d %s \n",d.sno,d.sname); // display the values of student d.
   
   fclose(fp);
   return 0;
}
