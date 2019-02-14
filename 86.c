#include <stdio.h>

void main() {
	char s[10];
	int i,f=0,j;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!=0;j++)
		{
			if(s[i]==s[j])
			{
				printf("no");
				f=1;
				break;
			}
		}
		if(f==1)
		break;
	}

if(f==0)
{
	printf("yes");
}

}
