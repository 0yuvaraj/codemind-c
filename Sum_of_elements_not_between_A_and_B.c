#include <stdio.h>
int main()
{
	int i,f,x,y,z,w, flag=0;
	scanf("%d
",&x);
	int a[x];
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&f,&z);
	for (i=0;i<x;i++)
	{
		if(a[i]<f || a[i]>z)
		{
			flag=flag+a[i];
		}
	}
	printf("%d",flag);
}
