#include<bits/stdc++.h>
using namespace std;

int power(int a , int n){
    int ans = 1;

    while(n > 0){
        int l_b = (n&1);
        if(l_b){
            ans = ans*a;
        }

        a = a*a;
        n = n >> 1;
    }
    
    return ans;
}

int main(){

    int n;
    cin>>n;


}
