#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int k = 1;
    int sum  = 0;

if(n % 2 != 0)
{    

for(int i = 3;i<=n;i++)
{
    sum = sum + i*i;
}
int ans = k - sum;
cout<<ans;

}
else
{
    cout<<"Invalid choice";
}


}