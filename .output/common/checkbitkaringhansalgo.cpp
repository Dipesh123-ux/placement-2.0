#include <iostream>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    int count = 0;
    
    while(n != 0)
    {
       int rsbm = n & -n;
       n -= rsbm;
       count++;
    }

    cout<<count;
}