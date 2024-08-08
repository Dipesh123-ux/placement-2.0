#include <iostream>
using namespace std;

int transitionPoint(int arr[] , int n);

int main ()
{
    int n , i ;
    cout<<"enter number of elements :"<<endl;
    cin >> n;
    int arr[n];
    for(i = 0; i < n;i++)
    {
        cin>>arr[i];
    }

cout<<transitionPoint(arr , n);

}

int transitionPoint(int arr[], int n) {
    int i ;
    for(i = 0 ; i <n ; i++)
    {
        if(arr [i] != arr [i + 1])
        {
            return i + 1;
        
        }
        
        
    
    }
    
    return -1;

    

}