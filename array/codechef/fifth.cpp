#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--) {
        int n , l , r;
        cin>>n>>l>>r;
        int arr[r+1];
        int ans;
        

        for(int i = l; i<=r; i++) {
            int unit=0 , sum = 0 , N = 0;
           while(n > 0) {
               unit = n % i;
               sum += unit;

               N = n / i;
           }

           arr[i] = sum;
        }
        
        int min = INT_MIN;

        for(int i = l;i <=r; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                ans = i;

            }
        }

        cout<<ans<<endl;

    }

}