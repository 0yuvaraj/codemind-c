#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d
",&x,&y);
	int m[x][y];
	for (int i=1;i<=x;i++)
	{
		for (int j=0;j<y;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	int s=0,e=0;
	for (int i=1;i<=x;i++)
	{
		for (int j=0;j<y;j++)
		{
			if (m[i][j]%2==0)
			{
				s=s+m[i][j];
			}
		}
	}
	for (int i=1;i<=x;i++)
	{
		for (int j=0;j<y;j++)
		{
			if (m[i][j]%2!=0)
			{
				e=e+m[i][j];
			}
		}
	}
	printf("%d %d",s,e);
}
