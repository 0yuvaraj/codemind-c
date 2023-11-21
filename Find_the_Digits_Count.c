#include <stdio.h>
#include <math.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	int  cnt=0,x,temp=n;
	while (n>0)
	{
		x=n%10;
		n=(n-x)/10;
		cnt++;
	}
	printf("%d",cnt);
	
}