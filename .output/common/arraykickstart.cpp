#include <iostream>
#include <climits>
using namespace std;

int maxlen(int n , int arr[])
{
    int des = 2;
    int res = 2;
    int i;
    int prev = (arr[1] - arr[0]);
    int curr = (arr[1] - arr[0]);

    for(i=2; i < n; i++)
    {
        curr = arr[i] - arr[i-1];

        if(curr == prev)
        {
            des++;
        }
        else
        {
            prev = curr;
            res = max(res, des);
            des = 2;
        }
    }

    res = max(res , des);

    return res;
}

void print(int arr[] , int c , int n)   
{
        cout<<"case#"<<c<<" "<<":"<<maxlen(n , arr)<<endl;
}

int main()
{
    int t;
    cout<<"Enter test cases\n";
    cin>>t;
   int  count = 0;
    while(t--)
    {
        int n;
        cout<<"Enter legth of array :";
        cin>>n;
        int arr[n];
        for(int i=0; i < n;i++)
        {
            cin>>arr[i];
        }
        count++;
        
        print(arr ,count , n);

        
    }
}