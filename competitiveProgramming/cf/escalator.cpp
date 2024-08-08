#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n, m , k ,H;
    cin>>n>>m>>k>>H;
    int height[n];
    for(int i = 0; i < n; i++){
        cin>>height[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
       int j = abs(H - height[i]);
       if((j % k == 0) && (j / k < m) && (j / k >= 1)){
         ans++;
       }
    }
   
   return ans;
    
}

int main(){
   int t;
   cin>>t;
   while(t--){
     cout<<solve();
     cout<<endl;
   }
}