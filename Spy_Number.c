#include <stdio.h>
int main()
{
	int a,i,s=0,p=1;
	scanf("%d",&a);
	while (a>0)
	{
		i=a%10;
		s=s+i;
		p=p*i;
		a=a/10;
	}
	if (s==p) printf("Spy Number");
	else printf("Not Spy Number");
}
