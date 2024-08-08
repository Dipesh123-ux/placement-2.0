#include <stdio.h>

int main ()
{
    int i , j , n , k;
    scanf("%d",&n);

    for(i = 1 ; i < 2*n ; i++)
    {
        k = n;
        if (i <= n)
        {
            for(j = 1; j< 2*n; j++)
            {
                printf("%d ",k);

                if(i > j)
                {
                    k--;
                }
                if( i + j >= 2*n)
                {
                    k++;
                }
            }

        }

        if(i > n)
        {
            for(j =1; j < 2*n ; j++)
            {
                printf("%d ",k);
                if( i + j < 2*n)
                {
                    k--;
                }
                if(j >= i)
                {
                    k++;
                }
            }

           
        }
        printf("\n");
    }
}