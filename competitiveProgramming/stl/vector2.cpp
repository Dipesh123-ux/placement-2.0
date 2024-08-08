#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v{10,20,40,50};

    // v.insert(v.end(),60);
    // v.insert(v.begin() + 2,30);

    // // v.erase(v.begin() + 2, v.end());

    // for(int x : v){
    //     cout<<x<<" ";
    // }

    // cout<<endl;
    // cout<<v.front()<<endl; //gives the front element
    // cout<<v.back()<<endl;  // gives the last element 

    // reserve function to avoid doubling 

    vector<int> v;
    int n;
    cin >>n;
    v.reserve(n);

    for(int i = 0; i <n; i++){
        int no;
        cin >> no;
        v.push_back(no);
        cout<<v.capacity()<<endl;
    }







}