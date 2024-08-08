#include <stdio.h>


void sum(int *P , int *q)
{
    int sum;
    sum = *P + *q;
    printf("%d",sum);
}

int main ()
{
    int a , b ;
    int *P , *q;
    scanf("%d" "%d",&a,&b);

    P = &a;
    q = &b;
    sum(P , q);
    return 0;
 


}