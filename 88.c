#include <stdio.h>
void main()
{
    int a1, a2, min;
  
    scanf("%d %d", &a1, &a2);

    
    min = (a1>a2) ? a1 : a2;

   
    while(1)
    {
        if( min%a1==0 && min%a2==0 )
        {
            printf(" %d",min);
            break;
        }
        ++min;
    }
    
}
