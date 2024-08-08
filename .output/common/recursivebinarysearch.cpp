#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[] , int l , int h ,int x)
 {
    if(l > h)
        return -1;
    
    int mid = (l + h)/2;


     if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid] > x)
    {
        return binarysearch( arr ,  l , mid - 1 ,x);
    }
    else 
    {
        return binarysearch( arr , mid + 1 ,  h , x);
    }


 }

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarysearch(arr,0,n - 1,x);
}