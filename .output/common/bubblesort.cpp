#include <iostream>
using namespace std;

void sort(int arr[] , int n){

        for(i =0 ; i< n - 1 ; i++)       // for number of passes 
        {
        int flag = 0;
        // for number of swaps done 
        for( j = 0; j < n -1 - i; j++) {

            if(a[j] > a[j + 1])
            {
               swap(a[j], a[j + 1]);
               flag = 1;
            }

        }   
        if (flag == 0)
        {
            break;
        }

    }
        for(i =0 ; i< n; i++) {
        cout<<a[i]<<" ";
    }
}

int main ()
{
    int n , i , j;
    cin>>n;
    int a[n];
    for(i =0 ; i< n; i++) {
        cin>>a[i];
    }

    sort(a,n);


}