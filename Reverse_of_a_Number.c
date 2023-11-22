#include <stdio.h>
int main()
{
	int a,s=0,x;
	scanf("%d",&a);
	while (a>0)
	{
		x=a%10;
		s=s*10+x;
		a=a/10;
	}
	printf("%d",s);
}
