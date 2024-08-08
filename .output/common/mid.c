#include <stdio.h>

int main ()
{
    int n , i ;

    printf("Enter number of elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements:\n");

    for(i=0;i <= n - 1;i++)
    {
        scanf("%d",&arr[i]);
    }

    if( n % 2 == 0)
    {
        printf("mid element is %d and %d",arr[n/2 - 1] , arr[n/2]);
    }
    else{
        printf("mid element is %d",arr[n/2]);
    }

    
}    