#include<bits/stdc++.h>
using namespace std;

void printMap(vector<int> v,int k){
    map<int,int> m;

    for(int  i : v){
        m[i]++;
    }

    int c = 0;
      
    for(auto i : m) {
        c++;
        if(i.second >= 1){
            cout<<i.first<<" ";
        }

        if(c == k){
            break;
        }
    }
}

int main(){


    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0; i< n; i++){
           int a ;
           cin>>a;
           v.push_back(a);
    }

    printMap(v,1);

}