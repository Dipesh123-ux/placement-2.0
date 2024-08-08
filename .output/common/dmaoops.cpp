#include<bits/stdc++.h>
using namespace std;


int sum(int *a,int n)
{
int s=0;
for(int i=0;i<n;i++)
s=s+*(a+i);
return s;
}

int main()
{
int *p,i,n;
cout<<"enter how many values to be read:";
cin>>n;
p=new int[n];
cout<<"Enter values :";
for(int i=0;i<n;i++)
cin>>p[i];
int Array_sum=sum(p,n);
cout<<"sum of all values are "<<Array_sum; 

}