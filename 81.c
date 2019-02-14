#include <stdio.h>

void main() 
{
	int k,o,i;
	
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&k,&o);
	if(k>o)
	{
		printf("\n%d",k-o);
	}
	else
	{
		printf("\n%d",o-k);
	}
	}
}
