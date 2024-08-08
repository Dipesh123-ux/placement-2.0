#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n;i++){
            arr[i] = i+1;
        }
        
        if(n == 1){
            cout<<arr[0]<<endl;
        }
        else{
        
        int i = n - 1;
        int j = n - 2;
        
        
        while(j >= 0){
            swap(arr[i],arr[j]);
            i = i -2;
            j = j -2;
        }
        
        for(int i = 0 ; i < n;i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
        
        }
        
    }
}