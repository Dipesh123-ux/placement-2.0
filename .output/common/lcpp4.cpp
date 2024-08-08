#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
     int sum = 0;

    while(t--)
    {
    int n , i ,k;
    cin>>n;
    int arr[n];
    for(i=0;i<= n-1;i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr + n );

    arr[n - 1] = arr[0];
    int s = arr[0];

    for(i = 0 ;i<= n - 1;i++)
    {
        if(arr[i] % s == 0)
        {
             k = s;
             
        }
        else
        {
            k =1;
            break;
        
        }
    }
   
    for(i = 0; i<= n-1;i++)
    {
        sum = sum + (arr[i]/k);
    }

    cout<<sum<<endl;

   }

}
