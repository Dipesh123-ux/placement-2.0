#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int dp[n];
    vector<int> odd,even;

    for(int i=0; i<n; i++){
         if(arr[i]%2 == 0){
            dp[i] = 1;
            even.push_back(arr[i]);
         }
         else{
            dp[i] = 0;
            odd.push_back(arr[i]);
         }
    }
    
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    
    vector<int> final(n,0);

    int k = 0;

    for(int i = 0; i < n;i++){
        if(dp[i] == 0){
            final[i] = odd[k++];
        }
    }

    k = 0;

     for(int i = 0; i < n;i++){
        if(dp[i] == 1){
            final[i] = even[k++];
        }
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        if(final[i] != arr[i]){
            return 0;
        }
    }

   return 1;

}

int main(){

    int t;
    cin>>t;

    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}