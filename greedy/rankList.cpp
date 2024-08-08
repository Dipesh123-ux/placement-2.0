#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10000] = {0};
    int t;
    cin>>t;

    while(t--){
        memset(arr,0,sizeof(arr));
        string name;
        int rank , n;
        cin>>n;

        for(int i=0; i < n ; i++){
            cin>>name>>rank;
            arr[rank]++;
        }

        int bad = 0;
        int r = 1;

        for(int i=1; i <= n ; i++){
            while(arr[i]--){
                bad += abs(r-i);
                r++;
            }
        }

        cout<<bad<<endl;
    }

}