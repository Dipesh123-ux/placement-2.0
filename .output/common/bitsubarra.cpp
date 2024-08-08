#include <iostream>

using namespace std;

int main ()
{
    int n ;
    cin>>n;
    int Xor = 0;
    int count = 0;
    int arr[n];
    int i;
    for(i =0;i<n;i++)
    {
        cin>>arr[i];
    }

   int s =((1 << n));

   for(i=1;i<s;i++)
   {
       for(int j = 0; j < n; j++)
       {
           if( (i & (1 << j)) != 0 )
           {
               cout<<arr[j]<<" ";
           }

       }
          cout<<endl;
   } 

   cout<<count;

}