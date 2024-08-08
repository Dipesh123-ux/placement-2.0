#include<bits/stdc++.h>
using namespace std;

// in multimap multiple elements have same keys 

int main(){

    multimap<char,string> m;
    int n;
    cin>>n;

    for(int i=0; i<n;i++){
        char c;
        string s;
        cin>>c>>s;
        m.insert(make_pair(c,s));
    }

       // search for element

       auto f = m.find('b');

       cout<<f->second<<endl;

    for(auto p : m){
        cout<<p.first<<"-->"<<p.second<<endl;
    }

  




}