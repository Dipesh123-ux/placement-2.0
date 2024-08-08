#include <stdio.h>

void minmax(int arr[] , int len , int *min , int *max)
{
  *min = *max = arr[0];
  int i;
      for(i = 1; i <= len -1; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        else if(arr[i] < *min)
        {
            *min = arr[i];
        }

    }
}

int main ()
{
    int n , max , min ,i;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int len = n;
    int arr[len];
    for(i=0; i <= len - 1; i++)
    {
        scanf("%d",&arr[i]);
    }

    minmax(arr[len] , len , &min , &max);
    
    printf("maximum and minimum value is %d %d",max , min);
}