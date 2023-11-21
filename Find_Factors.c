#include <stdio.h>
int main()
{
	int n,x=0,y=0,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			printf("%d ",i);
		}
	}
}
