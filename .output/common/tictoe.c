#include <stdio.h>

int main ()
{
    int i , j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i==0 || i == 4 )
            {
                printf(" * ");
            }
            else if(j == 0 || j == 8 )
            {
                printf(" * ");
            }
            
            else
            {
                printf(" ");
            }
            
        
    }
    printf("\n");
}

}