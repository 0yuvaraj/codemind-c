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
		n=(n-i)/10;
	}
	if (j==x) printf("Palindrome");
	else printf("Not Palindrome");
}
