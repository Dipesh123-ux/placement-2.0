#include <iostream>
using namespace std;

int main ()
{
    int n ,p;
    cin>>n;
    cout<<"Enter the position at which you want bit:";
    cin>>p;

    if((n & (1 << p)) != 0)
    {
        cout<<"Bit is 1";
    }
    else
    {
        cout<<"Bit is 0";
    }
}