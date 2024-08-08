#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 1; i < n;)
    {
        if(arr[i -1] >= arr[i] && arr[i] <= arr[i + 1])
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i =0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
}