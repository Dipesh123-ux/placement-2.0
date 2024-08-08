#include <stdio.h>

int main ()
{
  int n , rem;
  printf("Enter a number :\n");
  scanf("%d",&n);

  int count = 0;
  int q = n;
  
  while(q != 0)
  {
    q = q/10;
    count++;
  }
  q = n;
  int cnt = count , p = 1 , result = 0;
  int i;

  while(cnt != 0)
  {
    rem = q % 10;

    for(i = rem; i > 0; i --)
    {
      p = p * i;
    }

    result = result + p;
    q = q / 10 ;
    p = 1;
    cnt --;
  }  

  if (result == n)
  {
    printf("The number is a strong  number");
  }
  else
  {
    printf("The number is not a strong number");
  }

}