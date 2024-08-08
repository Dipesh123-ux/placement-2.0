#include<iostream>
#include<climits>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g , c;
        cin>>g>>c;

       int k = c*c;
       int m = 2*g;

       int ans = k / m ;


      cout<<ans<<endl;

    }
    
}