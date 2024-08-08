#include<bits/stdc++.h>
using namespace std;

int main(){ 

    int lsq = 0;
    int last = -1;

    while(1){
        int num;  // 1 2 4 1 3
        cin>>num;

        if(num  >  last ){
            lsq += 1;
        }
        else{
            lsq = 1;
        }

        last =  num;
        cout<<lsq<<" ";
      
    }

}