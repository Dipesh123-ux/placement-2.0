#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

void prime_seive(int *p){

    // first mark all odd numbers as prime 
    for(int i = 3; i <= 100000; i +=2){
       p[i] = 1;
    }

    for(ll i=3;i<=100000;i++){
        if(p[i] == 1){
            // mark all the multiples of i  as not prime
            for(ll j = i*i; j <= 100000; j=j+i){
                p[j] = 0;
            }
        }

    }

    p[2] = 1;
    p[1]= p[0] = 0;

}



int main(){


    int p[100000] = {0};
    prime_seive(p);

    int csum[100000] = {0};

    for(int i = 1; i <= 100000; i++){
      csum[i] = csum[i-1] + p[i];
    }

    int t;
    cin>>t;
    while(t--){
        int a , b;
        cin>>a>>b;

        cout<<csum[b]-csum[a-1]<<endl;
    }

}