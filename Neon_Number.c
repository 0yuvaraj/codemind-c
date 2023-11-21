#include <stdio.h>
int main()
{
	int a,i,s=0,p=0,j;
	scanf("%d",&a);
	s=a*a,j=a;
	while (s>0)
	{
		i=s%10;
		p=p+i;
		s=s/10;
	}
	if (j==p) printf("Neon Number");
	else printf("Not Neon Number");
}
