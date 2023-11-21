#include <stdio.h>
int main()
{
	int a,i,s=0,x=0;
	scanf("%d",&a);
	if (a>0)
	{
		while (a>0)
	{
		i=a%10;
		x=x*10+i;
		a=a/10;
	}
	printf("%d",x);
	}
	else if (a<0)
	{
		a=a*(-1);
		while (a>0)
	{
		i=a%10;
		s=s*10+i;
		a=a/10;
	}
	printf("%d",-s);
	}
	else printf("0");
}
