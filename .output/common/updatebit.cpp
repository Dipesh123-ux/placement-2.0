#include <iostream>

using namespace std;

int main ()
{
    int n , p;
    cin>>n>>p;
    bool b;
    cin>>b;

    int mask = ~(1 << p);
    n = (n & mask);   
    int k = ((n | (b << p)));
    cout<<k;


}