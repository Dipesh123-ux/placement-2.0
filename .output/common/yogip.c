#include <stdio.h>

int main()
{
    int i , j  , n;
    scanf("%d",&n); 
    for(i=0;i< n ;i++)
    {
        for(j=0;j<2*n -1;j++)
        {
            if( j >= i && j < 2*n - 1 - i)
            {
                printf("%d", n - i);
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

  for(i=1;i< n ;i++)
    {
        for(j=0;j<2*n -1;j++)
        {
            if( j >= n -1 - i && j <= n + i -1)
            {
                printf("%d", i +1);
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}