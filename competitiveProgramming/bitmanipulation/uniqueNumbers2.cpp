#include<bits/stdc++.h>
using namespace std;

int checkSetBit(int n){
    int pos = 0;

    while((n&1) != 1){
        pos++;
        n = n >> 1;
    }

    return pos;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    int x = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        x ^= arr[i];
    }

    int temp = x;

    int pos = checkSetBit(temp);

    int m = (1 << pos);

    int ans_first = 0;

    for(int i=0;i<n;i++){
        if((arr[i]&m)>0){

            ans_first ^= arr[i];
        }
    }

    int ans_sec = ans_first^temp;


    cout<<min(ans_first,ans_sec)<<" "<<max(ans_first,ans_sec)<<endl;





}