#include <bits/stdc++.h>
#include <climits>

using namespace std;

int get_water(int a[] , int n)
{
     int res = 0;
    int lmax[n] , rmax[n];
    lmax[0] = a[0];

    for(int i = 1; i < n ; i++)
    {
         lmax[i] = max(a[i] , lmax[i - 1]);
    }
      rmax[n - 1] = a[n - 1];
    for(int j = n - 2; j >= 0; j --)
    {
        rmax[j] = max(a[j], rmax[j + 1]);
    }    

    for(int k = 1; k < n - 1 ; k++)
    {
       res = res + (min(lmax[k] , rmax[k]) - a[k] );
    }

    return res;
}

int main ()
{
    int n , i ,j;
    cin>>n;
    int a[n];
    for( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

cout<<get_water(a , n)<<endl;
 

  

  }

