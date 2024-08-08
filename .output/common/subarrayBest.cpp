#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = arr[0];
    int result = sum;

    for(int i=1; i<n; i++){
        sum = sum + arr[i] >= arr[i] ? sum + arr[i] : arr[i];
        result = max(result, sum);
    } 
 
    cout<<result;
}