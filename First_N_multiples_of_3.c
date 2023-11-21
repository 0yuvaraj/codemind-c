#include <stdio.h>
int main()
{
    int n,m,i,count=0;
    scanf("%d",&n);	
    for (i=1;i<=n*3;i++)
    {
    	if(i%3 == 0)
    	{
    		printf("%d ",i);
		}
    }
}
