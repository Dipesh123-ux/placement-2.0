#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n+1] , B[n+1];
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }
        
        int odd = 1;
        int even = 2;

       while(1)
       {
           while(even <= n && arr[even]%2 != 0)
           {
               even += 2;
           }
           while(odd <= n && arr[odd]%2 == 0)
           {
               odd += 2;
           }
           if(even > n || odd > n)
           {
               break;
           }
           
           swap(arr[odd],arr[even]);
       }
       
       int sum = 0;
        
        for(int i=1;i <= n; i++)
        {
            B[i] = (arr[i] + i) % 2;
            sum = sum + B[i];
            
        }
        
        
        cout<<sum<<endl;
    }
}