#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    
    int n;
    cin>>n;
    int q;
    cin>>q;
    int Q[n];
    for(int i=0; i<q; i++){
        cin>>Q[i];
    }

    vector<int> dp(n+1,0);

    for(int i=0; i<q; i++){
        dp[Q[i]] = dp[Q[i]] == 1 ? 0 : 1;
        int j = 2*Q[i];

        while(j <= n){
            if(dp[j] == 0){
                dp[j] = 1;
            }
            else if(dp[j] == 1){
               dp[j] = 0;
            }
            if(dp[j+1] == 0){
                dp[j+1] = 1;
            }
            else if(dp[j+1] == 1){
               dp[j+1] = 0;
            }
            
            j = 2*j;
        }

        for(int i=1; i <= n; i++){
              cout<<dp[i]<<" ";
        }
        cout<<endl;
    }

 int count = 0;

 

 for(int i = 1 ; i <= n; i++){
    if(dp[i] == 1){
        count++;
    }
 }

cout<<count<<endl;
cout<<endl;

}



}

int countNodes(int N, int Q, vector<int> qry){
   
   int ans = 0;

    for(int i= 1 ; i <= Q; i++){
        if(qry[i] % 2 == 0){
            qry[i] = 0;
        }
        else {
            qry[i] = 1;
        }
    }
    
    
    
}


