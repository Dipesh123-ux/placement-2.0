#include<bits/stdc++.h>
using namespace std;

//check whether n has exactly 3 divisors
// to find this n must be perfect square and square root of n must be a prime number

// so first we will find n is a perfect square or not then we will check whether it is a prime or not

 long long square_root(long long N){
    for(long long i = 1; i*i <= N; i++){
        if(i*i == N){
            return i;
        }
    }

    return -1;
 }

 bool isPrime(long long N){
    if(N == 1){ return false;}
    for(long long i = 2; i*i <= N; i++){
        if(N % i == 0){
            return false; 
        }
    }
    return true;
 }

bool check_three_divisors(long long N){
    long long a =square_root(N);
    if(a == -1){
        return false;
    }
      if(isPrime(a)){
            return true;
        }
    return false;
}
int main(){
 
 int t;
 cin >> t;
 while(t--){
    int n;
    cin>>n;
    cout<<check_three_divisors(n)<<endl;

 }

}