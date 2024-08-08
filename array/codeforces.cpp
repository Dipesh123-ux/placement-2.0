#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i = 0;
        int j = 1;
        
        if(s.size() == 1){
            cout<<s<<endl;
        }
        else{
        string ans = "";
        
        while(j < s.size()){
            if(s[j] != s[i]){
                j++;
            }
            else{
                j++;
                ans += s[i];
                i = j;
                j++;
            }
        }
        cout<<ans<<endl;
        }
    }
}