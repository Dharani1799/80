#include <stdio.h>
#include<string.h>
void main() {
	char a[10];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
		
	}

	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%c",a[i]);
		}
		
	}
	

}
