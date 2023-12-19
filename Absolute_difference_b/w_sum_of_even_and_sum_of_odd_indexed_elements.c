#include <stdio.h>
#include <math.h>
int main()
{
	int i,f=0,x,y=0,z=0;
	scanf("%d
",&x);
	int a[x];
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<x;i++)
	{
		if (i%2==0)
		{
			y=y+a[i];
		}
	}
	for (i=0;i<x;i++)
	{
		if (i%2!=0)
		{
			z=z+a[i];
		}
	}
	printf("%d",abs(y-z));
}
