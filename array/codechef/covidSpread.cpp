#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int p , d;
        cin>>p>>d;

        long long int ans;

        if(d <= 10){
            
            ans = pow(2 , d);

        }
        else{
            ans = 1024*pow(3 , d - 10);
        }

        if(ans > p){
            ans  = p;
        }
     
         cout<<ans<<endl;
       
    }
}