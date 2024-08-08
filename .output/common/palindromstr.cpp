#include <iostream>
using namespace std;

int main ()
{
    int n , i;
    cin>>n;
    char arr[n+1];
    cin>>arr;
     bool check = 1;    
    for(i= 0 ; i<n ; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
            
        }
        
    }

      if(check == true)
      {
          cout<<"word is a palindrome"<<endl;
      }
      else
      {
      cout<<"word is not a palindrome"<<endl;
      }

}