#include<bits/stdc++.h>
using namespace std;

bool compare(string a , string b){
    if(a.length() <= b.length() && b.substr(0,a.length()) == a) return false;
    else if(b.length() <= a.length() && a.substr(0,b.length()) == b) return true;
    else return a < b;
}

void sort(string arr[] , int n){

        for(int i =0 ; i< n - 1 ; i++)       // for number of passes 
        {
        int flag = 0;
        // for number of swaps done 
        for(int j = 0; j < n -1 - i; j++) {

            if(!compare(arr[j],arr[j+1]))
            {
               swap(arr[j], arr[j + 1]);
               flag = 1;
            }

        }   
        if (flag == 0)
        {
            break;
        }

    }
        for(int i =0 ; i< n; i++) {
        cout<<arr[i]<<" ";
    }
}


int main(){

    int n;
    cin>>n;
    string arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,n);

}