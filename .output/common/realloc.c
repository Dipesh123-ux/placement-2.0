#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;

    int *ptr = (int *)malloc(5*sizeof(int));

    if (ptr==NULL)
    {
        exit(1);
    }
    printf("Enter five integers:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",ptr + i);
    }
    ptr = (int *)realloc( ptr ,10*sizeof(int));

    printf("Enter five more integers:\n");
    for (i=5;i<10;i++)
    {
        scanf("%d",ptr + i);
    }

    for (i=0;i<10;i++)
    {
        printf("%d ",*(ptr + i));
    }
        

}
