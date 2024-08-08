#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int pos;
    cin>>pos;

    int value;
    cin>>value;

    insert(arr , n , pos , value);
    
}