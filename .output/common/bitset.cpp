#include <iostream>
using namespace std;

int main ()
{
    int n , p;
    cin>>n;
    cout<<"Enter the position at which you want to set bit :";
    cin>>p;

    int k = (n | (1 << p ));

    cout<<k;

}