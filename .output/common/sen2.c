#include <stdio.h>

int main ()
{
    int i , j , n;
    scanf("%d",&n);

    int b = n;

    for(i=1; i<= n; i++)
    {
        for(j =1; j <= n; j++)
        {
            if(i==j)
            {
                printf("%d",b);
                b--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

        for(i=2; i<= n; i++)
    {
        for(j =n; j >= 1; j--)
        {
            if(i==j)
            {
                printf("%d",i);
                
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}