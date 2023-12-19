#include <stdio.h>
int main()
{
	int i,f,x,y,z,w,c=0, flag = -10000;
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
		    if (flag == -10000) {
		        flag = a[i];
		    }
			if(a[i]>flag)
			{
			    flag=a[i];
			}
			c=1;
		}
	}
	if (c==0) printf("-1");
	else printf("%d",flag);
}
