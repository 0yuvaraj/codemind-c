#include <stdio.h>
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
	for (i=1;i<x-1;i++)
	{
		if (a[i]%2==0&&a[i-1]%2!=0&&a[i+1]%2==0)
		{
			f++;
		}
		else if (a[i]%2==0&&a[i-1]%2==0&&a[i+1]%2!=0)
		{
			f++;
		}
		else if (a[i]%2!=0&&a[i-1]%2!=0&&a[i+1]%2==0)
		{
			f++;
		}
		else if (a[i]%2!=0&&a[i-1]%2==0&&a[i+1]%2!=0)
		{
			f++;
		}
	}
	printf("%d",f);
}
