#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i < n; i++){
        if(arr[i] < arr[i-1]){
           return 0;
        }
    }

    int minDiff = INT_MAX;

    for(int i=1; i < n; i++){
       minDiff = min(minDiff, arr[i]-arr[i-1]);
    }

    return minDiff/2 + 1;

}

int main(){
     int t;
     cin>>t;
     while(t--){
        cout<<solve()<<endl;
     }
}