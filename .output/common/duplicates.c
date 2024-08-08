#include <stdio.h>

int main()
{
    int ld = 0;
    int n ;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
 for(i=0; i<n; i++)
 {
     if(arr[i]==arr[i+1] && arr[i]!=ld)
     {
         printf("%d",arr[i]);
         ld = arr[i];
     }
 }
  
}