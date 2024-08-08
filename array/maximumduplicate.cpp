#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
bitset<MAX> bit1, bit2, bit3;

int main ()
{
   int t;
   cin>>t;
   while (t--)
   {
    int n , x;
    cin>>n>>x;
    int arr[n] ,b[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int M = 0;
    int count  = 1;
    int ans = 1 ;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1]) 
        {
           count++;
           M = count;

           ans = max(ans , M);
        }
        else 
        {
            count = 1;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        b[i] = arr[i] ^ x;
    }  


    int i=0,j=0 , count2 = 0;
 
   while(n > i && n > j){
 
      if (arr[i] < b[j]) { 
          i++;
 
       }else if(arr[j] < b[i]){
         j++;
 
       } else {
 
        count2++;
        i++;
        j++;
      }
   }

    int final , f2;
    
  
      final = ans + count2 ;
       f2 = count2;


     cout<<final<<" "<<f2<<endl;
    

   }

    

}


