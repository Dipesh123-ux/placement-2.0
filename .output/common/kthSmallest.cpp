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
    int k , j;
    cin>>k;

    int kthmin = arr[0];
    while(k != 0)
    {
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < kthmin)
            {
                kthmin = arr[i];
                j = i;
            }
        }

        arr[j] = INT_MAX;
        cout<<j<<endl;
        k--;

    }

  

   
}