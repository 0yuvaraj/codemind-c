#include <stdio.h>
int main()
{
	int n,i,x=0;
	scanf("%d",&n);
	int a=0,b=1,c;
	for (i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
