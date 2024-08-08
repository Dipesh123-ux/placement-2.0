#include <stdio.h>

int main ()
{
    int i , j , n;
    char ch;
    printf("enter a number greater than 10:\n");
    scanf("%d",&n);
    printf("Enter a choice :\n");
    scanf("\n");
    scanf("%c",&ch);
    char P , N;


       if(ch == 'P')
       {
         for(i = n-6; i <= n -1; i++)
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
      printf("\n");
     

     if (ch == 'N')
     {
     for(i = n+ 1; i <= n + 7; i++)
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
      
    

}