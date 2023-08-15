#include <stdio.h>
int main()
{
char ch;
FILE *fp1;
FILE *fp2;
/* Assume this test1.c file has some data.
For example “Hi, How are you?” */
if (fp1 = fopen("test1.c", "r"))
{
ch = getc(fp1);
// Assume this test2.c file is empty
fp2 = fopen("test2.c", "w+")
while (ch != EOF)
{
fputc(ch, fp2);
ch = getc(fp1);
}
fclose(fp1);
fclose(fp2);
return 0;
}
return 1;
}
