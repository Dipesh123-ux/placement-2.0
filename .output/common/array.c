#include <stdio.h>

int main ()
{
    int n , i;

    char arr[n];

    for(i =0 ; i < n ; i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == ' ' && arr[i + 1] != ' ')
        {
            printf("%c\n",arr[i]);
        }
    }
}