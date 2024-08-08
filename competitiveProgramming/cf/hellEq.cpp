#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

while(t--){
       int x;
       cin>>x;
         
         int n = x + 4;
         vector<int> v;
         
         for(int i = 1; i*i <= n;i++){
             if(n % i == 0){
                 v.push_back(i);
                 if(n / i != i){
                    v.push_back(n/i);
                 }
             }
         }
  
    int k = v.size();

    if(k > 2 && v[k-2] != 2){
        if(k % 2 == 0 && (v[k-1]*v[k-2] == n)){
            cout<<"YES"<<endl;
        }
        else if(k % 2 == 1 && v[k-1]*v[k-1] ==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
      }
}
}
