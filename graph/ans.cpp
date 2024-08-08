#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1 , pair<int,int> p2){
    return ((p1.first - p1.second) < (p2.first - p2.second));
}


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n , r;
        cin>>n>>r;
        
        int c[n] , b[n];
        
        for(int i = 0; i < n;i++){
            cin>>c[i];
        }
        for(int i = 0; i < n;i++){
            cin>>b[i];
        }
        
        vector<pair<int,int> > v;
        
        for(int i =0 ; i < n; i++){
            v.push_back({c[i],b[i]});
        
        }

     
        
        sort(v.begin(),v.end(),comp);


        int count = 0;
        
        
        for(int i = 0 ; i < n; i++){
            while(r >= v[i].first){
                count++;
                r = r - v[i].first + v[i].second;
            }
        }
        
        
        cout<<count<<endl;
       
        
        
    }
}