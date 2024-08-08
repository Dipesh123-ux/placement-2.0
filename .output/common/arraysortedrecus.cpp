#include <iostream>
using namespace std;

bool sorted(int arr[] , int n)
{
    if(n==0 || n ==1)
    {
        return true;
    }
    else
    {
        return (arr[n-1] >= arr[n -2] && sorted(arr , n-1));
    }
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if( sorted(arr , n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}