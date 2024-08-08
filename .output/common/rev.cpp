#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main ()
{
    int i;
    cin>>i;
    while(i != 0)
  {
    int n , count = 0 , rem , sum = 0;
    cin>>n;
    int q = n;
    while(q != 0)
    {
        q = q / 10;
        count++;
    }
    while(count != 0)
    {
        rem = n % 10;
        sum = sum + rem*pow(10 , count - 1);
        n = n/10;
        count--;
    }
    cout<<sum;
    i--;
  } 
}