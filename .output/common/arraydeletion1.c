#include <stdio.h>
#include <stdlib.h>

int delete_first(int arr[] , int n)
{
    int i;
    if(n == 0)
    {
    printf("Empty!");
    }
    else
    {
        for(i=0;i<= n-2;i++)
        {
            arr[i] = arr[i+1];
        }
        
    }
    return n - 1 ;
}

int main ()
{
    int n , i;
    printf("Enter no. of elements:\n");
    scanf("%d", &n);

    int arr[n];
    
    for(i =0;i<= n -1; i++)
    {
        scanf("%d",&arr[i]);
    }

    n = delete_first(arr , n);
    for(i = 0;i <= n -1 ; i++)
    {
        printf("%d ",arr[i]);
    }

}
