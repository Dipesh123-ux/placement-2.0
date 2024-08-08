#include <iostream>

using namespace std;

int main ()
{
    int x;
    cin>>x;

    int m = (x & (-x));  // -x represents 2's complement of x
    
    cout<<m;
}
