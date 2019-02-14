#include <stdio.h>
 
void main() 
{
	int n,r,p=1;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("\n%d",p);
}
