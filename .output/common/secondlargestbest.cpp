#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n , i; 
    cin>>n;
    int a[n];
   for(i= 0; i< n; i++)
   {
       cin>>a[i];
   }
  int res = -1 , largest = 0;


  for(i =1 ; i < n ;i++)
  {

      if(a[i] > a[largest])
      {
          res = largest;
          largest = i;
 
      }
      else if(a[i] != a[largest])
      {
          if(res == -1 || a[i] > a[res])
          {
              res = i;
          }
      }
  }

  cout<<res<<endl;
}