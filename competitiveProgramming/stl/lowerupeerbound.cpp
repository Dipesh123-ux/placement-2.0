#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {20,30,40,40,40,40,50,60,100};

    int key;
    cin >> key;

    // binary search

    // bool present = binary_search(arr,arr + 6 , key);

    // if(present){
    //     cout << "present" << endl;
    // }
    // else{
    //     cout << "absent"<<endl;
    // }

    // lower and upper bound
    // lower bound : gives the address of first element greater than or equal to the given element 

    auto lb = lower_bound(arr,arr+9,key);
   

    // upper bound : gives the address of first element greater than the given element 
     auto ub = upper_bound(arr,arr+9,key);
 


     // occurance of an element in an unsorted array is upper bound - lower bound


     cout<<"Occurance of the element "<<key<<" is "<<(ub-lb)<<endl;



}