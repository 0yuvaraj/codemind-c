#include <stdio.h>
int main()
{
	int a,b,s=0,x,i,j;
	scanf("%d%d",&a,&b);
	for (i=1;i<=b;i++)
	{
		x=a*i;
		if (x%a==0&&x%b==0)
		{
			s=x;
			printf("%d ",s);
			break;
		}
	}	
}
