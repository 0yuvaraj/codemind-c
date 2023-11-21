#include <stdio.h>
int main()
{
    float n,i,x=1,y=0;
    scanf("%f",&n);	
    for (i=1;i<=n;i++)
    {
    	x=1/i;
    	y=y+x;
    }
    printf("%.2f",y);
}
