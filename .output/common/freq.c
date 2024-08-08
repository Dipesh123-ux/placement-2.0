#include <stdio.h>
#include <math.h>

int main ()
{
    int rem , n , count =0 , t , sum =0;
    printf("enter test cases:\n");
    scanf("%d",&t);
    while(t--)
    {
    printf("Enter number:");    
    scanf("%d",&n);
    int q = n;

    while (q != 0)
    {
        q = q / 10;
        count ++;
    }
    int p = n;
    rem = p % 10;
    sum = sum + rem;
    p =  p / pow(10 , count );
    sum = sum + p;
    printf("%d",sum);


    
    } 
}