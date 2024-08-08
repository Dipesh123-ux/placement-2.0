#include <stdio.h>

int main ()
{
    int i , j , n;
    scanf("%d",&n);

    for(i=1 ; i <= n ; i ++)
    {
        for(j = 1; j <= n; j ++)
        {
            if(i == 1 || j == 1 )
            {
                printf("%d",i + j -1);
            }
            else if ( i == n)
            {
                printf("%d", i + 1 - j);
            
            }
            else if ( j == n)
            {
                printf("%d", j +1 - i);

            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
}