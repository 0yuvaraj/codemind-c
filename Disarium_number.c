#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j=0,x,a,b,y=0;
	scanf("%d",&n);
	x=n;
	while (n>0)
	{
		b=n%10;
		y=y*10+b;
		n=n/10;
	}
	for (a=1;a<=y;a++)
	{
		i=y%10;
		j=j+pow(i,a);
		y=y/10;
	}
	if (j==x) printf("True");
	else printf("False");
}
