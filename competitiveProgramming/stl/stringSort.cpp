#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.get();

    string s[n]; // array of strings

    for(int i=0; i<n; i++){
        getline(cin, s[i]);
    }

    sort(s , s + n);

       for(int i=0; i<n; i++){
        cout<<s[i]<<" ";
    }

}