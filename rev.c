#include<stdio.h>
int main()
{
	int rev,n,r;
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	rev=rev*10+r;
    	n=n/10;
	}
	printf("%d",rev);
    return 0;
}
