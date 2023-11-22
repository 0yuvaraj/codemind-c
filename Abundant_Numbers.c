#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int x=0;
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			x=x+i;
		}
	}
	if (x-n>n) printf("True");
	else printf("False");
}
