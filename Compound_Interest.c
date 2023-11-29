#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,d;
	scanf("%f%f%f",&p,&r,&t);
	d=p*pow(1+r/100,t)-p;
	printf("%.2f",d);
}
