#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	while (n>0)
	{
		x=n%10;
		printf("%d",x);
		n=(n-x)/10;
	}
}
