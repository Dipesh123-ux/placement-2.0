#include <stdio.h>
#include <stdlib.h>

// row major

struct matrix 
{
    int n;
    int *arr;
};

void set(struct matrix *m , int i , int j , int x)
{
    if(i >= j)
    {
        m->arr[i*(i-1)/2 + (j-1)] = x;
    }
}

int get(struct matrix m ,int i ,int j)
{
    if(i>=j)
    {
        return m.arr[i*(i-1)/2 + (j-1)];
    }
    else
    return 0;
}

void display(struct matrix m )
{
    int i , j;
 
 for(i = 1; i<=m.n;i++)
 {
     for(j=1;j<=m.n;j++)
     {
         if(i >= j)
         printf(" %d ",m.arr[i*(i-1)/2 + (j-1)]);
         else
         printf(" ");
     }

     printf("\n");

 }
}

int main ()
{
    struct matrix m;
    int i , j ,x;

    printf("Enter dimesions : ");
    scanf("%d",&m.n);

    m.arr = (int *)malloc(m.n*(m.n + 1)/2*sizeof(int));
    printf("Enter all elements :");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
           scanf("%d",&x);
           set(&m,i ,j ,x);
        }
    }
    printf("\n\n");
    display(m);
}