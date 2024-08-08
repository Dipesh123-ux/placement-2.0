#include<bits/stdc++.h>
using namespace std;

int maximumItems(int arr[], int n, int sum){
    priority_queue<int,vector<int>,greater<int>> pq;
    int count = 0;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
 
    
    while(!pq.empty()){
        if(sum - pq.top() >= 0){
            count++;
            sum -= pq.top();
        }
        pq.pop();
    }
    

    return count;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i <n; i++){
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    cout<<maximumItems(arr,n,sum);

}