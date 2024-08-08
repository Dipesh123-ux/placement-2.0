#include<bits/stdc++.h>
using namespace std;

void filter(int n ,  string s){

    int j = 0;
    

    while(n > 0){
        int l_b = (n&1);
        if(l_b == 1){
            cout<<s[j];
        }
        j++;
        n = n >> 1;
    }

    cout<<endl;
} 

int main(){

    string s;
    cin>>s;

    for(int i=0;i<(1<<s.length());i++){
        filter(i,s);
    }

}