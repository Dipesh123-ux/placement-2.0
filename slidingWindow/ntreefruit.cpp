#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;
    int a[n], h[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        cin >> h[i];
    }

    int i = 0, j = 0;
    int maxLen = 0;
    int s = 0;

    int fi = 0, fj = 0;

    while (j < n)
    {

        s += a[j];

        if (s <= k)
        {
            maxLen = max(maxLen, j - i + 1);
            fi = i;
            fj = j;
            j++;
        }
        else
        {
            while (s > k)
            {
                s -= a[i];
                i++;
            }
            j++;
        }
    }

    int ans = 1;

    if(maxLen == 0 || maxLen == 1){
        cout<<maxLen<<endl;
    }
    else{
        int temp = 0;
       for(int i = fi; i < fj; i++){
         if(h[i] % h[i+1] == 0){
            ans++;
         }
         temp = max(ans,temp);
       }

       cout<<temp<<endl;
    }
    
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
}