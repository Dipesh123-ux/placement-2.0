#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int count = 0;
    int p =n;

    while (p != 0){
        count++;
        p = p/10;
    }
    
    int r;
    int rev =0;


    while(n != 0){

        r = n%10;
        rev = rev  + r*pow(10,count-1);
        n = n/10;  
        count--;
        
    }

    cout<<rev<<endl;

        
        
        
    }

    


