#include <stdio.h>
int main()
{
	int a,s=0,x;
	scanf("%d",&a);
	while (a>0)
	{
		x=a%10;
		if (x>s)
		{
			s=x;
		}
		a=a/10;
	}
	printf("%d",s);
}
