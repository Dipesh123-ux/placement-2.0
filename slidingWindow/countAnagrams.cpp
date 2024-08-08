#include<bits/stdc++.h>
using namespace std;

int countAnagrams(string a, string b) {
        int ans = 0;
        unordered_map<char,int> m;
        for(char c : b){
            m[c]++;
        }
        int count = m.size();
        int i = 0 , j = 0;
        while(j < a.length()){
            if(m.find(a[j]) != m.end()){
                m[a[j]]--;
                if(m[a[j]] == 0){
                    count--;
                }
            }
            if(j - i + 1 < b.length()){
            j++;
           }
            else{
                if(count == 0){
                    ans++;
                }
                
                if(m.find(a[i]) != m.end()){
                    m[a[i]]++;
                    if(m[a[i]] == 1){
                        count++;
                    }
                }
                
                i++;
                j++;
            }
            
        }
        return ans;
    }

int main(){

    string a , b;
    cin>>a>>b;
    int ans = countAnagrams(a,b);
    cout<<ans<<endl;

}