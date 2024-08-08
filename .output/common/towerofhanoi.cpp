#include <bits/stdc++.h>
using namespace std;

void towerofhanoi(int n , char src , char dest , char helper)
{
    if(n == 0)
    {
        return;
    }
    towerofhanoi(n-1,src,helper,dest);               
    cout<<"move from "<<src<<" to "<<dest<<endl;      
    towerofhanoi(n-1, helper ,dest , src);           
}

int main ()
{
    int t;
    cin>>t;
    while (t--){

        int n;
        cout<<"Enter number of disks to move: ";
        cin>>n;

        towerofhanoi(n , 'A' , 'B' , 'C');


    }
    
}