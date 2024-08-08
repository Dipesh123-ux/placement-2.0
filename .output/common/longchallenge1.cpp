#include<iostream>
#include<climits>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d , x , y , z;
        cin>>d>>x>>y>>z;

        int k = 7*x;
        int m = d*y + (7 - d)*z;

      int ans = max(k , m);

      cout<<ans<<endl;

    }
    
}