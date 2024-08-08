#include<bits/stdc++.h>
using namespace std;

bool validMountain(int arr[],int n){
    int i =0;
    int j = n-1;

    if(n < 3){
        return false;
    }

    while(i < j){
        if(arr[i] < arr[i + 1] && arr[j-1] > arr[j]){
            i++;
            j--;
        }
        else if(arr[i] < arr[i + 1]){
            i++;
        }
        else if(arr[j-1] > arr[j]){
            j--;
        }
        else
        {
            break;
        }

       
    }

     if(i == j){
            return true;
      }

    return false;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i =0; i <n; i++){
        cin >> arr[i];
    }

    cout<<validMountain(arr,n)<<endl;

}
