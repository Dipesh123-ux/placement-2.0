#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main ()
{
    int i , n , rem , count = 0 , sum = 0;
    cin>>n;
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=n-1;i++)
    {
        int q = arr[i];
        while(q != 0)
       {
           q = q/ 10;
           count++;

       }
       while(count != 0)
       {
           rem = arr[i] % 10;
           sum = sum + rem*pow(10,count -1);
           arr[i] = arr[i] / 10;
           count--;
          

       }
       cout<<sum<<endl;
       sum = 0;

    }
}