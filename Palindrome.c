#include <stdio.h>
int main()
{
	int n,i,j=0,x;
	scanf("%d",&n);
	x=n;
	while (n>0)
	{
		i=n%10;
		j=j*10+i;
		n=n/10;
	}
	if (j==x) printf("True");
	else printf("False");
}
