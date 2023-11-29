#include <stdio.h>
int main()
{
	int n,m,i,x, y, f;
	scanf("%d%d",&n,&m);
	for (i=n;i<=m;i++)
	{
		x=i;
		f=0;
		while(x>0)
		{
			y=x%10;
			if (y == 0 || i%y!=0)
			{
				f++;
			}
			x=x/10;
		}
		if (f==0)
		{
			printf("%d ",i);
		}	
	}
}
