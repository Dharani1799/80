#include <stdio.h>
void main()
{
    int a1, a2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a1, &a2);

    for(i=1; i <= a1 && i <= a2; ++i)
    {
       
        if(a1%i==0 && a2%i==0)
            gcd = i;
    }

    printf(" %d  %d %d", a1, a2, gcd);

}
