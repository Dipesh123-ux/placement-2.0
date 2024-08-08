#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

void prime_seive(int *p){

    // first mark all odd numbers as prime 
    for(ll i = 3; i <= 10000007; i +=2){
       p[i] = 1;
    }

    for(ll i=3;i<10000007;i++){
        if(p[i] == 1){
            // mark all the multiples of i  as not prime
            for(ll j = i*i; j < 10000007; j=j+i){
                p[j] = 0;
            }
        }

    }

    p[2] = 1;
    p[1]= p[0] = 0;

}



int main(){

    int p[10000007] = {0};

    prime_seive(p);

    int t;
    cin>>t;
    while(t--){
     int a,b;
    cin>>a>>b;
     for(int i=a;i <= b; i++){
        if(p[i] == 1){
            cout<<i<<" ";
        }
    }
    }
}