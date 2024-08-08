#include <iostream>
#include <cmath>

using namespace std;

int powerof2(int n)
{
  int i = 1;
  while(i * 2 <= n)
  {
      i = i * 2;
  }

  return i;
}

int main ()
{
    int n ;
    cin>>n;

    int hp = powerof2(n);
    int l = n - hp;
    int ans = 2 * l + 1;

    cout<<ans;


}