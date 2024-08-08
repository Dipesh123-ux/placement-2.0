#include<bits/stdc++.h>
using namespace std;

// unique elements and also sort the elements

int main(){

    int arr[] = {1,1, 2,10 , 5 , 5};


    set<int> s;

    for(int i = 0; i < 6;i++){
        s.insert(arr[i]);
    }

    for(int i : s){
        cout<<i<<" ";
    }



}