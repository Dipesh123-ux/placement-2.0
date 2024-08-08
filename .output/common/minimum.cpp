#include <iostream>
using namespace std;

int main ()
{
    int n , m;
    cin>>n>>m;
    int k = (n>m)*m + (m>n)*n;
    cout<<k;
}