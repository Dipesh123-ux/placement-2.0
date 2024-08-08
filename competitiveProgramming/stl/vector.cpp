#include<bits/stdc++.h>
using namespace std;

int main(){

 
    vector<int> b(5,10); // 5 elements each value is 10
    vector<int> c{1,2,3,4,5}; // initialization

    // iteration 

    // for(int i =0; i < c.size(); i++){
    //     cout<<c[i]<<" ";
    // }

    // cout<<endl;
    // for(int x : b){
    //     cout<<x<<" ";
    // }

// user input 

int n;
cin >> n;

   vector<int> v;

for(int i = 0; i < n;i++){
    int no;
    cin >> no;
    v.push_back(no);
}

for(int x : v){
    cout<<x<<" ";
}
cout<<endl;
cout<<v.size()<<endl; // no. of elements in the vector
cout<<v.capacity()<<endl; // size of underlying vector
cout<<c.capacity()<<endl; // size of underlying vector
cout<<v.max_size()<<endl; // maximum number of elements a vector can hold in worst case 




}