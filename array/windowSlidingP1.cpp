#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k ;
    cin>>k;

    int current_Sum = 0;

    for(int i=0; i<k; i++){
        current_Sum += arr[i];
    }

    int maxSum = current_Sum;

    for(int i = k ; i < n; i++){

        current_Sum += (arr[i] - arr[i - k]);
        maxSum = max(current_Sum, maxSum);
    }

    cout<<maxSum<<endl;

    }