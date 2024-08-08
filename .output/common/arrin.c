#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , p , v;
    printf("No. of elements:\n");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n;i++)
    {
        printf("Enter element %d :",i + 1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of insertion of new element:\n");
    scanf("%d",&p);
    printf("Enter new element:\n");
    scanf("%d",&v);

    for(i=n;i>=p;i--)
    {
        arr[i] =arr[i-1];
    }
    arr[p - 1] = v;

    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

}