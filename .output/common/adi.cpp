#include <iostream>
using namespace std;

int main()
{

    int n, i;
    cout<<"enter value of n:"<<endl;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        break;
        

      else if(i == n )
      {
       cout << "yes" << endl;
      } 

    }
 





return 0;

}