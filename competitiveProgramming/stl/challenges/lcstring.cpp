#include<bits/stdc++.h>
using namespace std;

    bool check(string a , string b){
        sort(b.begin(),b.end());
        if(a == b){
            return true;
        }
        
        return false;
    }
    
    
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        cout<<s1<<endl;
        int l = s1.length();
        
        for(int i = 0; i < s2.length();i++){
            string sub = s2.substr(i,l);
            cout<<sub<<" ";
            if(check(s1,sub)){
                return true;
            }
        }
        
        return false;
        
    }

int main(){

    string s1,s2;
    cin>>s1>>s2;

    checkInclusion(s1,s2);

}