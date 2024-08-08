#include <iostream>


using namespace std;


struct matrix
{
    int arr[10];
    int n;
};


void Set(struct matrix *m , int i , int j , int x )
{
    if(i == j)
    {
       m->arr[i -1] = x;
    }
}

int get(struct matrix m , int i ,int j)
{
        if(i = j)
        {
            return  m.arr[i -1];
        }
        else
        return 0;
}
void display(struct matrix m)
{
    int i , j;

    for(i = 1; i <= m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
        if(i == j)
        {
            printf(" %d ",m.arr[i -1]);
        }
        else 
           printf(" 0 ");
        }
        printf("\n");
    }


}

int main ()
{
   struct matrix m;
   m.n = 4;


   Set(&m , 1 , 1 , 5);Set(&m ,2,2,8);Set(&m ,3,3,11);Set(&m ,4,4,14);

   display(m);

   printf("%d",get(m , 2 , 2));
      



}