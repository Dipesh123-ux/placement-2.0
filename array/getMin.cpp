#include<bits/stdc++.h>
using namespace std;

int getMinimum(string s,int n){
    int j = 0;
    int ans = 1;
    unordered_map<char,int> m;
    m[s[0]]++;
    while(j < n){
        if(m.find(s[j]) != m.end()){
            j++;
        }
        else{
            m[s[j]]++;
            j++;
            ans++;
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    cout<<getMinimum(s,n);

}