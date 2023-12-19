#include <stdio.h>
int main()
{
	int i,f,y=0,x;
	scanf("%d
",&x);
	int a[x];
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	y=a[0];
	for (int j=0;j<x;j++)
	{
		if (a[j]<y)
		{
			y=a[j];
		}
	}
	printf("%d",y);	
}
