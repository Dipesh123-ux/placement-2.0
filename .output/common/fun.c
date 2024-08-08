#include <stdio.h>

void avg(int n )
{
    int i , sum = 0;
   int arr[n];
   printf("enter numbers:\n");
   for ( i = 0; i <= n -1; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   for(i = 0; i <= n -1; i++)
   {
     if (arr[i] % 2 != 0)
     {
         sum = sum + arr[i];
     }
   }

   printf("%d",sum);
   
   
   
}

int main () 
{
    int n ;
    printf("Enter a number:\n");
    scanf("%d",&n);
    avg(n);
    


}