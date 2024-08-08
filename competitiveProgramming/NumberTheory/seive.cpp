#include<bits/stdc++.h>
using namespace std;

const int maxLen = 10000005;
vector<bool> v(10000005);

void fill_primes(){
   
    for(int i =1; i< maxLen; i++){
         v[i] = 1;
    }
    v[1] = false;
    for(int i = 2; i < maxLen; i++){
        if(v[i] == 1){
            for(int j = i*i;j <= maxLen; j += i){
                v[j] = 0;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,k;
    cin >>a>>b>>k;
    vector<int> ans;
    fill_primes();
    for(int i = a; i <= b; i++){
        if(v[i] == 1){
            ans.push_back(i);
        }
    }
    cout<<ans[k-1];
    }
}