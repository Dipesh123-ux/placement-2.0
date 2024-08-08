#include <iostream>
using namespace std;
int main ()
{

  int i , j , n , l , u;

   cout<<"Enter two numbers between which you want prime numbers :"<<endl;

   cin>>l>>u;

  for(i = l + 1; i <= u-1; i++)
  {
    for(j = 2 ; j <= i -1; j++)
    {
      if (i%j == 0)
      break;
    }

    if (i == j)
    cout<<i<<" ";
  }

}