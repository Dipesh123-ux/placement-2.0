#include <iostream>
#include <climits>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
    long long int n ;
    int  k; 
    cin>>n;
    int array[n];
    int i ;
    for(i=0; i<n ; i++)
    {
         cin>>array[i];
    }
    int min = array[0];
    int max = array[0];
    int count = 0;
    for(i=1; i<n; i++)
    {
        if(array[i] <= min)
        {
            min = array[i];
        }
        else if(array[i] >= max)
        {
            max = array[i];
            count++;
        }
    }

     array[count] = min;

     for(i=0; i<n ; i++)
     {
         if(array[i] % min == 0)
         {
               k = min;
         }
         else
         {
             k = 1;
             break;
         }
     }

     long long int  sum = 0;
     
     if(k != 0)
     {

     for(i=0; i<n; i++)
     {
         sum = sum + array[i] / k;
     }
     
     } 

     cout<<sum<<endl;

    
    
  }
} 