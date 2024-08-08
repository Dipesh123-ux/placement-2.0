#include<bits/stdc++.h>
using namespace std;

//heap

int main(){

   // priority_queue<int> pq; // max head 
    priority_queue<int,vector<int>,greater<int>> pq;  //min heap

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        pq.push(no);
    }

    while(!pq.empty()){
        cout << pq.top() <<" ";
        pq.pop();




























































        
    }

}