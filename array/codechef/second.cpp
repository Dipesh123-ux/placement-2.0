#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--) {
        int N , A , B;
        cin>>N>>A>>B;
        string s;
        cin>>s;
        int t2 = 0;

        for(int i=0; i<N; i++) {
            if(s[i] == '1')
            {
                t2++;
            }
        }

         int t1 = N - t2;

        int ans  = A*t1 + B*t2;

         cout<<ans<<endl;

    }
}