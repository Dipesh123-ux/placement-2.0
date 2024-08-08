// natural numbers sorted array
#include <iostream>

using namespace std;

int main ()
{
    int n , i;

    cin>>n;
    int a[n];

    for(i=0; i< n; i++)
    {
        cin>>a[i];
    }

    int sum = 0;

    for(i = 0; i< n ; i++)
    {
        sum = sum + a[i];

    }

    int p = (a[n-1]*(a[n - 1] + 1))/2;

    int m = p - sum;
    cout<<m;




}