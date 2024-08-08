#include<bits/stdc++.h>
using namespace std;

const int maxLen = 1e6 + 5;

set <long long> my_bucket;
bool prime[maxLen];

void seive(){
    for(int i = 1; i < maxLen; i++){
        prime[i] = true;
    }
    prime[1] = false;

    for(int i = 2; i*i < maxLen; i++){
        if(prime[i]){
            for(int j = i*i; j < maxLen; j += i){
                prime[j] = false;
            }
        }
    }

    for(int i = 1; i < maxLen; i++){
        if(prime[i]){
            my_bucket.insert(i*i);
        }
    }
}

bool check_three_divisors(long long N){
    if(my_bucket.find(N) != my_bucket.end()){
        return true;
    }
    return false;
}

int main(){

 seive();
 int t;
 cin>>t;

 while(t--){
 long long a ,b,k;
 cin>>a>>b>>k;
 vector<int> ans;
 for(int i = a; i <= b; i++){
    if(prime[i]){
        ans.push_back(i);
    }
 }
  if(k > ans.size()){
    cout<<-1<<endl;
  }
  else{
    cout<<ans[k-1]<<endl;
  }
 }


 }

