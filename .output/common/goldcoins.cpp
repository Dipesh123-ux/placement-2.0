#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr + n, greater<int>());

        int sum = 0;

        for(int i=0; i<n; i++){

            sum += arr[i];

            if(sum >= x){
                cout<<i+1<<endl;
                break;
            }

        }

        if(sum < x){
            cout<<-1<<endl;
        }

    }
}