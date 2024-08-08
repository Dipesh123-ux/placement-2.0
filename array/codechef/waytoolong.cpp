#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
    string s;
    cin>>s;
    int l = s.length();
    if(l > 10)
    {
    int k = l - 2;
    cout<<s[0]<<k<<s[l-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
    }
}