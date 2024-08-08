#include <iostream>
using namespace std;

int main ()
{
    int n , i , j;
    cin>>n;
    int arr[n];
    for( i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    int res = arr[0];

    for(i= 0 ; i < n ; i++)
    {
        int sum = 0;
        for(j=i;j<n;j++)  
        {
         sum = sum + arr[j];
          res = max(res , sum);
        }

        }

           cout<<res;
}     