#include <iostream>

using namespace std;

int main ()
{
    int n , i , k;
    cin>>n;
    int arr[n + 1];

    for(i =0 ; i <= n -1 ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element :";
    cin>>k ;
    for(i = n -1 ; i>= 0; i--)
    {
    if(arr[i] > k )    
    {
        arr[i + 1] = arr[i];
    }
    else
    {
        arr[i +1] = k;
        break;
    }
    } 

    for(i = 0 ; i <= n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}