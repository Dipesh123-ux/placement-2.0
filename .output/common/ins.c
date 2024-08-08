#include <stdio.h>

int main ()
{
int n , i , m ;
scanf("%d",&n);

for(i=1;i<=10;i++)

{
    m = n * i;
    printf("%d = %d * %d \n",m , n ,i);
  
}
}