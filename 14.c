#include<stdio.h>


void main()
{
	int a,k,p=1,i;
	scanf("%d %d",&a,&k);
	for(i=0;i<k;i++)
	{
	    p=p*a;
	}
	printf("%d",p);
}
