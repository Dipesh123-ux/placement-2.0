#include<bits/stdc++.h>
using namespace std;

int main(){

   float res = 100;
   int P;
   cout << "Enter the probability of two people having same birthday" << endl;
   cin>>P;

   int count = 1;
   float k = 364;

   if(P == 100){
       cout<<366<<endl;
   }

else{
   while(res >= 100 - P){

     res *= k/365;
     k--;
     count++;
      
   
   }

     cout<<count<<endl;
}
   


}