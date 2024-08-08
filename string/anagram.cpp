#include <bits/stdc++.h>
using namespace std;

bool compare(string s,string b){
    sort(s.begin(),s.end());
    sort(b.begin(),b.end());
    
    if(s == b){
        return true;
    }
    
    return false;
    
}

int main()
{
    string a , b;
    cin>>a>>b;
    vector<int> v;
    int sub = b.length();
    int k  = a.length() - b.length();
    for(int i = 0; i <= k;i++){
        string s = a.substr(i,sub);
        if(compare(s,b) == true){
            v.push_back(i);
        }
    }
    
    
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }

    

    return 0;
}