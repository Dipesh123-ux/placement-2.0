#include <stdio.h>

int main ()
{
    int   j  ,k;

    scanf("%d",&k);

  for(j=1;j<=k;j++)
  {
    int i , n , count = 1;
    
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    printf("Case #%d: ",j);
    printf("%d ",count);

     for(i=0;i <= n -2; i++)
    {
        
        if(str[i] < str[i + 1])
        {
            count++;
        }
        else 
        {
            count = 1;
            printf("%d ",count);
            continue;
        }
        printf("%d ",count);
    }

    printf("\n");   
  }
    
}