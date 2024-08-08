#include<bits/stdc++.h>
using namespace std;

// int convertTime(string current, string correct) {

    
        
//  }

int main(){

    string curr , corr;
    cin>>curr>>corr;

    int a = ((curr[0]*10 + curr[1])*60 + curr[3]*10 + curr[4]) - '0';
    int b = ((corr[0]*10 + corr[1])*60 + corr[3]*10 + corr[4]) -'0';

    cout<<b-a;

    


}