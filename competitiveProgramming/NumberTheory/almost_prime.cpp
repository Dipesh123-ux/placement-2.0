#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
} 

bool is_almost_prime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            if(i != n/i){
                if(isPrime(i) && isPrime(n/i)){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(is_almost_prime(i)){
            ans++;
        }
    }
    cout<<ans<<endl;
}