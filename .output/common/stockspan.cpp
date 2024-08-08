#include <bits/stdc++.h>
using namespace std;

void span(int arr[],int n)
{
    stack<int> s;
    int span;
    s.push(0);
    cout<<1<<" ";
    for(int i = 1; i< n; i++)
    {
        while(s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        
        span = s.empty() ? i + 1 : i -s.top();

        cout<<span<<" ";
        s.push(i);
    }
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    span(arr,n);
}