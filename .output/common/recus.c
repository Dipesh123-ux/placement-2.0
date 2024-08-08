#include <stdio.h>

int f(int n)
{
    if(n ==0)
    {
        return 1 ;
    }
    else{

        if ( n > 0)
        {
           printf("%d ", n);
           return f(n -1);
        }

    }
}   

    int final(int n)
    {
        if ( n == 0)
        {
            return 1;
        }
        else {

            f(n);
            printf("\n");
            final(n - 1);

        }
    }
    


int main ()
{
    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);
    
    final(n);
    return 0;
}