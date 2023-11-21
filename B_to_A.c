#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d%d",&n,&i);
	j=i;
	for (j<=i;j>=n;j--)
	{
		printf("%d ",j);
	}
}