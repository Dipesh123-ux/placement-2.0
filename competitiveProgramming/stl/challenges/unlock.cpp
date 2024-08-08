#include<bits/stdc++.h>
using namespace std;

void unlock(int arr[] , int n,int k){

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < k;){

        max = *max_element(arr,arr+n);
        min = *min_element(arr,arr+n);

        if(arr[i] == min){
            swap(arr[i],max);
        }
   




    }
}

int main(){

    int n , k;
    cin>>n>>k;

    for (int i =0 ; i< n;i++){
        cin>>arr[i];
    }
  unlock(arr,n,k);

}