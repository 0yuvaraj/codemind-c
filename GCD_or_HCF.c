#include <stdio.h>
int main()
{
	int a,b,s=0,x,i,j;
	scanf("%d%d",&a,&b);
	for (i=1;i<=b;i++)
	{
		if (a%i==0&&b%i==0)
		{
			if (i>s)
			{
				s=i;
			}
		}
	}
	printf("%d",s);
}
