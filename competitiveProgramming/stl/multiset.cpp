#include<bits/stdc++.h>
using namespace std;

// store same multiple elements
//values once inserted can't be modified
// associative container elementsare refered by their value not by index 
//underlying data structure = BST

int main(){

    int arr[] = {10,20,30,10,20,30};

    multiset<int> m(arr,arr+6);

    // erase all occurance of element 

    m.erase(20);

    // insert new element

    m.insert(80);

    for(int x : m){
        cout << x <<" ";
    }

    cout<<endl<<m.count(10);

}