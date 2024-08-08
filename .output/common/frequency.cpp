#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
     cin>>n;
     int arr[n];
     for(int i =0; i< n; i++)
     {
         cin>>arr[i];
     }

     int dup = arr[0];
     int count = 0;

    for(int i =0; i< n; i++)
    {
        if(arr[i] == dup)
        {
            count++;
        }
        else if(arr[i] != dup)
        {
            cout<<arr[i-1]<<" : "<<count<<endl;
            dup = arr[i];
            count = 1;
        }
        
    }
    cout<<arr[n-1]<<" : "<<count;
}