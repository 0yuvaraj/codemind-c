#include <stdio.h>
int main()
{
	int i,f=0,x;
	scanf("%d
",&x);
	int a[x];
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	int y=0;
	for (int j=0;j<x;j++)
	{
		if (j%2!=0)
		{
		    y=y+a[j];
		}
	}
    printf("%d",y);
}