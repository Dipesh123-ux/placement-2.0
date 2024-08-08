#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    
    int c = 0;

    for(int i = 1; i <= n; i++){
        if(arr[i-1] == i){
            c++;
        }
    }


        if(c % 2 == 0){
            return c/2;
        }
        else{
            return c/2 + 1;
        }
    

}

int main(){
     int t;
     cin>>t;
     while(t--){
        cout<<solve()<<endl;
     }
}