#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2 , 3 , 5 , 11 , 6};

    int key;
    cin >> key;

    auto it = find(arr,arr + 5,key);

    int index = it - arr;

    if(index == 5){
        cout<<key<<" is not present"<<endl;
    }
    else{
        cout<<key<<" is present at index : "<<index<<endl;
    }
    


}