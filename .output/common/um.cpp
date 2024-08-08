#include<bits/stdc++.h>
using namespace std;

int main(){

    string text,pattern;
    cin >>text>>pattern;

      unordered_map<char,int> m;
        
        for(char c : text){
            m[c]++;
        }
        
        auto it1 = m.find(pattern[0]);
         auto it2 = m.find(pattern[1]);
        
        if(it1->second < it2->second){
            m[pattern[0]]++;
        }
        else{
            m[pattern[1]]++;
        }

     
         cout<<it1->second*it2->second;
        

}