#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    int res = arr[1] - arr[0];
    int m  = arr[0];
    for(int i = 1; i< n; i++)
    {
        res = max(res,arr[i] - m);
        m  = min(m , arr[i]);
    }   

        
     cout<<res<<endl;
    
    }




