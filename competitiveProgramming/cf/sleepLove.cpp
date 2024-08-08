#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n , H , M;
        cin>>n >> H >>M;
        vector<pair<int, int> > v;
        vector<pair<int, int> > final;
        pair<int, int> ans;
        
        for(int i = 0; i <n; i++){
            int a , b;
            cin>>a>>b;
            v.push_back({a,b});
        }

       for(int i = 0; i < n; i++){
        int h = v[i].first;
        int m = v[i].second;
        if((h == H) && (m == M)){
            ans.first = 0;
            ans.second = 0;
        }
       else{
        if(m < M){
         ans.first = (h-H) - 1;
         ans.second = (m + 60 - M);
        }
        else{
            ans.first = (h-H);
            ans.second = (m-M);
        }
         
       }
       

      final.push_back(ans);

       }

      for(int i = 0; i < n; i++){
        cout<<final[i].first<<" "<<final[i].second<<endl;
      }

    }


}