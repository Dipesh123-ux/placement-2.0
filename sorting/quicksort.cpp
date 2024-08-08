#include<bits/stdc++.h>
using namespace std;

int partition(int l , int h , int arr[]){
    int p = arr[h];
    int i = l - 1;

    for(int j=l; j<h; j++){
        if(arr[j] < p){
            i++;
            swap(arr[i],arr[j]);
        }
    } 
    swap(arr[i+1],arr[h]);
    return i + 1;      
 

}

void quickSort(int l , int h , int arr[]){
    if(l < h){
        int j = partition(l,h,arr);
        quickSort(l,j-1,arr);
        quickSort(j+1,h,arr);
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(0,n-1,arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}