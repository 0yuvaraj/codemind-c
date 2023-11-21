#include <stdio.h>
int main()
{
	int a,b,i,j,s=0,x=0;
	scanf("%d%d",&a,&b);
	for (i=1;i<a;i++)
	{
		if (a%i==0)
		{
			s=s+i;
		}
	}
	for (j=1;j<b;j++)
	{
		if (b%j==0)
		{
			x=x+j;
		}
	}
	if (b==s&&a==x) printf("Amicable");
	else printf("Not Amicable");
}
