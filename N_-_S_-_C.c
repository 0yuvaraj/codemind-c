#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int i=a+1;
	for (i>a;i<b;i++)
	{
		printf ("%d %d %d
",i,i*i,i*i*i);
	}
}