#include <iostream>

using namespace std;

int main ()
{
    int n , p;
    cin>>n>>p;
   
   int k =((n ^ (1 << p)));
   cout<<k;
}