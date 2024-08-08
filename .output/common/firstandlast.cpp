#include <iostream>
using namespace std;

void f_l_array(int arr[] , int x , int n)
{
    int i;
    for(i = 0; i<n ; i++)
    {
        if(arr[i] == x)
        {
            cout<<i<<" ";
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(arr[i] == x)
        cout<<i;
        break;
    }
}

int main ()
{
    int n , i;
    cin>> n;
    int arr[n];

    for(i=0; i <= n -1; i++)
    {
        cin>>arr[i];
    }
   int x;
   cin>>x;
  f_l_array(arr[n] , x , n);



}