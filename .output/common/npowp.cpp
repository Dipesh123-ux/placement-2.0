#include <iostream>
using namespace std;

int pow(int n , int p)
{
   if(p == 0)
   {
       return 1;
   } 
   else
   {
       return n*pow(n , p -1);
   }
}


int main ()
{
    int n , p;
    cin>>n>>p;
    cout<<pow(n, p)<<endl;
    
}