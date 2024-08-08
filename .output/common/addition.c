#include <stdio.h>

int main()
{
  int n ,m, i , j ;
  printf("Enter the order of both the matrix:\n");
  scanf("%d %d ",&n ,&m );

  int arr1[n][m] , arr2[n][m];

  printf("Enter elements for first matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&arr1[i][j]);
    }
  }

  printf("Enter elements of second matrix:\n");
   for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
  }

  printf("Addition of these matrix are:\n");
   for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("%d",arr1[i][j] + arr2[i][j]);
    }
  }

  


}