#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int k = (int)log2(n)+1;
      
      if(n == 1)
      {
          cout<<1<<endl;
      }
      
      int a1 = n - pow(2 ,k-1) + 1;
      int a2 = pow(2,k-1) - pow(2,k-2);
      
      int ans = max(a1,a2);
      
      cout<<ans<<endl;
      
      
    }
    }
