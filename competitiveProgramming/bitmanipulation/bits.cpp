#include<bits/stdc++.h>
using namespace std;

bool getBit(int n, int i){
    
      n = n >> i;

      if(n & 1 == 1){
          return true;
      }else{
          return false;
      }


}

int setBit(int n , int i){
    n = n | (1 << i);
    return n; 
}

int clearBit(int n , int i){

   n = n & ~(1 << i);
   return n;

}

int updateBit(int n , int i , int v ){

    n = clearBit(n,i);
    n = n | (v << i);
    return n;

}

int clearLastIBits(int n , int i){
    int m = pow(2,i + 1) - 1;
    n = n & ~(m);
    return n;
}

int clearRangeItoJ(int n , int i,int j){

   

    int m1  = -1 << j+1;
    int m2 = pow(2,i) - 1; // pow(2,i) == 1 << i 
    int m = m1 | m2;

    n = n & m;

    return n;
    
}

int main(){

int n;
cin >> n;
int i;
cin >>i;
// int v;
// cin >> v;
int j;
cin >> j;

// cout<<getBit(n,i)<<endl;
// cout<<setBit(n,i)<<endl;
// cout<<clearBit(n,i)<<endl;
// cout<<updateBit(n,i,v)<<endl;
// cout<<clearLastIBits(n,i)<<endl;
cout<<clearRangeItoJ(n,i,j)<<endl;

}