#include <bits/stdc++.h>
using namespace std;



void print(vector<vector<int>>&arr){
        for(int i=0; i<arr.size(); i++){
    
         for(int j=0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
           }
        } 
}

void TransPose(vector<vector<int>>&arr){
    for(int i=0; i<arr.size(); i++){
        for(int j= i + 1; j <arr[i].size(); j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
   
}

void rotate90(vector<vector<int> > &arr){

    TransPose(arr);

    int k = arr.size();

    for(int i = 0; i< k; i++){
         int low = 0,  high = k-1;
         while(low < high){
             swap(arr[low][i], arr[high][i]);
             low++;
             high--;
         } 
    }


   






}


void printSnake(vector<vector<int>>&arr){


    for(int i=0; i<arr.size(); i++){

    if(i % 2 == 0){
         for(int j=0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
    }
    else{
             for(int j=arr[i].size() - 1; j >= 0; j--){
             cout << arr[i][j] << " ";
        }
    }
     
    }
}

 
int main (){
    int m , n , k;
    cin>>m>>n;

    vector<vector<int>> arr;
     
     for(int i = 0; i< m; i++){
         vector<int> v;
         for(int j = 0; j< n; j++)
         {
             int k;
             cin>>k;
            v.push_back(k);

         }
         arr.push_back(v);
     }
    
    
      rotate90(arr);
       print(arr);
      

}




