#include <stdio.h>
int main()
{
	int i,f=0,x,y;
	scanf("%d
",&x);
	int a[x];
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("
%d",&y);
	for (int j=0;j<x;j++)
	{
		if (y==a[j])
		{
		    f++;
		}
	}
    printf("%d",f);
}