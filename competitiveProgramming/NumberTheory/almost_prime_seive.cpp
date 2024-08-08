#include<bits/stdc++.h>
using namespace std;

const int maxLen = 1e5 + 5;
bool prime[maxLen];
int spf[maxLen]; //smallest prime factor

void primeSeive(){
    for(int i = 1; i < maxLen; i++){
        prime[i] = true;
    }
    prime[1] = false;

    for(int i = 2; i*i < maxLen; i++){
         if(prime[i]){
            for(int j = i*i; j < maxLen;j += i){
                prime[j] = false;
            }
         }
    }

    spf[1] = 1;

    for(int i = 2; i < maxLen; i++){
        if(prime[i]){
            for(int j = i; j < maxLen; j += i){
                if(spf[j] == 0){
                    spf[j] = i;
                }
                else{
                    continue;
                }
            }
        }
    }
}

bool almostP[maxLen];


int computeAnswer(int n){
    for(int i = 2; i <= n; i++){
        if(prime[i]){
           for(int j = i; j <= n; j+=i){
              if(prime[j/i] && j/i != i){
                almostP[j] = true;
              }
           }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(almostP[i]){
            ans++;
        }
    }
    return ans;
}


int computeAnswermethod2(int n){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int a  = spf[i];
        int b = spf[i/a];
        if(a != b && prime[a] && prime[b]){
            ans++;
        }
    }
    return ans;
}

int main(){

int n;
cin>>n;
primeSeive();
cout<<computeAnswermethod2(n);

}