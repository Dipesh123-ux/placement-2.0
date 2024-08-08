#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int  k = 0;

        int l = n % 10;
        int r = n / 10;

        if(r - 2*l == 0 || (r-2*l)%7 == 0) {
            cout<<n<<endl;
        }
        else{

         while((r - 2*k)%7 != 0){
                 k++;
            }

    n/=10;
    n*=10;
    n+=k;
    cout<<n<<endl;

        }
        
    }

}