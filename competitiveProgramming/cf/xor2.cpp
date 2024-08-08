#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     
     while(t--){
                 int n , x , y;
         cin>>n>>x>>y;
         int arr[n];
         for(int i = 0; i<n;i++){
             cin>>arr[i];
         }
         
         priority_queue<int,vector<int>,greater<int> > q;
         
         for(int i : arr){
             q.push(i);
         }

         int j = q.size();
         
         while(j--){
             int k = q.top();
             q.pop();
             k = k^x;
             q.push(k);
         }

         if((n%2 != 0 && y%2 == 0) || (n%2 == 0 && y%2 != 0)){
            int m = q.top();
            q.pop();
            m = m^x;
            q.push(m);
         }
         
         while(!q.empty()){
             cout<<q.top()<<" ";
             q.pop();
         }
         
         cout<<endl;
         
     }
}
