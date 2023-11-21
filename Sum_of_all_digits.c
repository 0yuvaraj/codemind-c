#include <stdio.h>
int main()
{
	int n,x=0,y=0;
	scanf("%d",&n);
	while (n>0)
	{
		x=n%10;
		y+=x;
		n=(n-x)/10;
	}
     printf("%d",y);
}