#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n , i;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n;i++)
    {
        cin>>arr[i];
    }
   int res = 0;
   for( i = 0;i < n; i++)
   {
       if(arr[i] > arr[res] )
       {
           res = i;
       }
   } 
 int k = -1;
 for(i=0;i<n;i++)
 {
     if(arr[i] != arr[res])
     {
         if(k == -1)
         {
             k = i;
         }
         else if(arr[i] > arr[k])
         {
             k = i;
         }
     }
 }

cout<<k<<endl;

}