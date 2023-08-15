#include<stdio.h>//sum 0f odd numbers to a certain limit
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			sum=sum+i;
			n=n+1;
		}
	}
		printf("%d",sum);
	return 0;
}














































