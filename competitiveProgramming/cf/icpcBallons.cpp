#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        unordered_map<char,int> m;
        int n;
        cin>>n;
        string s;
        cin>>s;

        int c = 0;

        for(int i = 0;i < n;i++){
            if(m.find(s[i]) == m.end()){
                c = c + 2;
            }
            else{
                c++;
            }

            m[s[i]]++;
        }

        cout<<c<<endl;

    }

}