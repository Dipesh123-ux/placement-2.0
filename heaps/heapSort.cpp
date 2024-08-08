#include<bits/stdc++.h>
using namespace std;


void maxHeapify(int arr[], int n , int i){
    int l = 2*i + 1 , r = 2*i + 2;
    int largest = i;
    if(l < n  && arr[l] > arr[largest]){
        largest = l;
    }
    if(r < n  && arr[r] > arr[largest]){
        largest = r;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildHeap(int arr[], int n){
    for(int i= (n - 2)/2;i >= 0;i--){
        maxHeapify(arr,n,i);
    }
}

void heapSort(int arr[] , int n){
    buildHeap(arr,n);
    for(int i = n - 1; i >= 0; i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr,i,0);
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i <n; i++){
        cin>>arr[i];
    }

    heapSort(arr,n);

   for(int i=0; i <n; i++){
        cout<<arr[i]<<" ";
    }
    
}