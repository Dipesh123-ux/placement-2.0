#include <stdio.h>

int main ()
{
    int n , i ;
    int max , min ;

    printf("Enter number of elements:\n");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i <= n - 1;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];

    for(i = 1; i <= n -1; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }

    }

    printf("maximum and minimum value is %d %d",max , min);



}
