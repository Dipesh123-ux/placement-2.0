#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
         int a , b , c , d;
         cin>>a>>b>>c>>d;
         
         if(a + b + c <= d)
         {
             cout<<1<<endl;
         }
         else if(a + b <= d || b + c <= d || c + a <= d)
         {
             cout<<2<<endl;
         }
         else if(a <= d || b <= d || c <= d )
         {
             cout<<3<<endl;
         }
     }
}
