#include<stdio.h>
int main()
{
	int len;
	char s[50];
	gets(s);
	len=strlen(s);
	reverse(s,len);
}
void reverse(char s[],int len)
{
	if(len==0)
	{
		puts(s);
	}
	else
	{
		s1[i]=s[len-1];
		i++;
		reverse(s,len-1);
	}
}


	


	


    
   


