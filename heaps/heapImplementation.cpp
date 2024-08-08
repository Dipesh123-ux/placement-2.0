#include <bits/stdc++.h>
using namespace std;

class minHeap{
    int *arr;
    int size;
    int capacity;

    public:

    minHeap(int c){
        arr = new int[c];
        size = 0;
        capacity = c; 
    }

    int left(int i){
        return 2*i  + 1;
    }
    int right(int i){
        return 2*i  + 2;
    }
    int parent(int i){
        return (i - 1)/2;
    }

    void insertKey(int k); 
    void heapify(int i);
    void printHeap();
    int extractMin();
    void decreaseKey(int i , int x);
    void deleteKey(int i);

};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeap::insertKey(int k)
{
    if (size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }
  
    // First insert the new key at the end
    size++;
    int i = size - 1;
    arr[i] = k;
  
    // Fix the min heap property if it is violated
    while (i != 0 && arr[parent(i)] > arr[i])
    {
       swap(&arr[i], &arr[parent(i)]);
       i = parent(i);
    }

}

// recursive solution 

void minHeap::heapify(int i){
    int l = left(i) , r = right(i);
    int smallest = i;

    if(l < size && arr[l] < arr[i]){
        smallest = l;
    }
    if(r < size && arr[r] < arr[smallest]){
        smallest = r;
    }

    if(smallest != i){
        swap(arr[i], arr[smallest]);
        heapify(smallest);
    }
}

void minHeap::buildHeap(){
    for(int i = (size - 2)/2; i >= 0; i--){
        heapify(i);
    }
}

int minHeap::extractMin(){
    if(size == 0){
        return INT_MAX;
    }
    if(size == 1){
        size--;
        return arr[0];
    }
    swap(arr[0],arr[size-1]);
    size--;
    heapify(0);
    return arr[size];
}

void minHeap::decreaseKey(int i, int x){
    arr[i] = x;
    while(i != 0 && arr[parent(i)] > arr[i]){
        swap(arr[i],arr[parent(i)]);
        i = parent(i);
    }
}

void minHeap::deleteKey(int i){

    decreaseKey(3,INT_MIN);
    extractMin();

    
}

void minHeap::printHeap(){
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    minHeap h(11);
    h.insertKey(20);
    h.insertKey(25);
    h.insertKey(30);
    h.insertKey(35);
    h.insertKey(40);
    h.insertKey(80);
    h.insertKey(32);
    h.insertKey(100);
    h.insertKey(70);
    h.insertKey(60);
    // h.heapify(3);
    // h.extractMin(); 
    h.deleteKey(3);
    h.printHeap();
}



