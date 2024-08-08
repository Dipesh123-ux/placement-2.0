#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxend = arr[0];
    int res = arr[0];


    for(int i =0; i< n; i ++)
    {
        
        maxend = max(maxend + arr[i] , arr[i] );
        res = max(res , maxend);

    }

    cout<<res;
}