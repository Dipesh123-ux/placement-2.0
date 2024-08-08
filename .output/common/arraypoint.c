#include <stdio.h>

int main ()
{
    int i , n , sum = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p = &a[0];
    while (*p < a[n])
    {
       sum = sum + *p;
       p++;
    }
    printf("%d",sum);

}