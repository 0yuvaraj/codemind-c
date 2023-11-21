#include <stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d%d",&n,&i);
	int j=n;	
    for (j>=n;j<=i;j++)
    {
        if (j%2==0 && j%3==0) 
        {
        	x++;
		}
    }
    printf("%d",x);
}