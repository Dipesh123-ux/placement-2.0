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
      int k = floor(log2(n));
      
      int a1 = n - pow(2 ,k) + 1;
      int a2 = pow(2,k-1);
      
      int ans = max(a1,a2);
      
      cout<<ans<<endl;
      
      
    }
    }