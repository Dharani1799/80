#include <stdio.h>

void main()
{
	int i,n,k,a[20];
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			printf("\n%d",a[i]);
			break;
		}
	}
}
