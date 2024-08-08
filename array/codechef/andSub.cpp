#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {

    
  
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

         if(n == 1)
          {
          cout<<1<<endl;
          }

     else 
     {
      
    int ans = INT_MIN;  
  for (int i=0; i<n; i++)
    {
        int curr_and = arr[i]; 
        int count = 1;
      
        for (int j=i+1; j<n; j++)
        {
            curr_and = (curr_and&arr[j]);
            if(curr_and > 0)
            {
                count++;
            }
             ans = max(ans, count);
        }
       
    }

           cout<<ans<<endl;


     }
    
    }

    





}