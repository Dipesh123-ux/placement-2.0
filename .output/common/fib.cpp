#include <iostream>
using namespace std;

int main ()
{
    int n , i , sum = 0 ; 
    cin>>n;
    int arr[n];
    
    for (i =0; i <= n -1; i++)
    {
        if (i == 0)
        {
           arr[0] = 0;
        }
        else if (i == 1)
        {
            arr[1] = 1;
        }
        else 
        {
            arr[i] = arr[i-1] + arr[i -2];
        }

        cout<<arr[i]<<endl;

        sum = sum + arr[i];

        
    } 

    cout<<"sum of series is :"<<sum<<endl;
}