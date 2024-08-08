#include <iostream>
using namespace std;


void kthSmallest(int arr[], int l, int r)
    {
        
        int arr2[r + 1];
        int m = (l + r )/2;
        int i = l;
        int j = m + 1;
        int o = l;
        
        while(i <= m && j <= r)
        {
            if(arr[i] < arr[j])
            {
              arr2[o++] = arr[i++];   
            }
            else
            {
                arr2[o++] = arr[j++];
            }
            
        }
        for(;i<=m;i++)
        {
            arr2[o++] = arr[i];
        }
         for(;j<=r;j++)
        {
            arr2[o++] = arr[j];
        }
        
        for(i=l;i<=r;i++)
        {
            arr[i] = arr2[i];
        }
         for(i=l;i<=r;i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
        
        
    }

int main ()
{
    int n ;
    cin>>n;
    int arr[n];
    int l =0;
    int r = n - 1;
    for(int i = l; i<=r;i++)
    {
        cin>>arr[i];
    }
    kthSmallest(arr,  l,  r);

}