#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[7];
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
      
        int c1 = 0;
        int c2 = 0;

        for(int i =0;i < 7;i++)
        {
            if(arr[i] == 1)
            {
               c1++;
            }
        }

        c2 = 7 - c1;

        if(c1 > c2)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}