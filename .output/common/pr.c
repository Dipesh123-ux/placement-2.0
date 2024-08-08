#include <stdio.h>

int main ()
{
    int i , j , n;
    scanf("%d",&n);

    for(i = n + 1; i <= n + 5; i++)
    {
        for(j = 2; j <= i -1;j++)
        {
            if(i % j == 0)
            {
                break;
            }


        }

          if (i == j)
            {
                printf("%d ",i);
            }

    }






}