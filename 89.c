#include <stdio.h>

void main() {
	char s[10];
	int n,i;
	scanf("%s",s);
	n=strlen(s);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
}
