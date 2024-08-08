#include<iostream>
using namespace std;
template<class T> //Template declaration 

void maxmin(T a[],int n) //Function Template
{
int i;
T temp; 
for(i=0;i<n;i++) 
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i]; 
a[i]=a[j]; 
a[j]=temp;
}
}
cout<<"max="<<a[n-1]<<"\n"<<"min="<<a[0]<<"\n";
/*After sorting an Array starting index consists of Small element and Final index consists of 
Largest element */
cout<<"sorted list is: \n"; 
for(i=0;i<n;i++) 
cout<<a[i]<<" ";
}
int main()
{
int a[50],i,ch,n;
double d[50]; 
float f[50]; 
char c[50];
cout<<"1.integer"<<endl; 
cout<<"2.characters"<<endl; 
cout<<"3.float numbers"<<endl; 
cout<<"4.double numbers"<<endl;
cout<<"Enter corresponding Index Example : enter '1' for integers"<<endl;
cin>>ch; //Reading Choice from User 
cout<<"enter the n value\n";
cin>>n; //Number of elements is independent of DATA TYPE 
switch(ch)
{
case 1: //for operations over Integer Array 
cout<<"enter integers\n";
for(i=0;i<n;i++) 
cin>>a[i]; 
maxmin(a,n); 
break;
case 2: //for operations over Character Array 
cout<<"enter characters\n";
for(i=0;i<n;i++) 
cin>>c[i]; 
maxmin(c,n); 
break;
case 3: //for operations over Floating Array 
cout<<"enter floatnumbers\n";
for(i=0;i<n;i++) 
cin>>f[i]; 
maxmin(f,n); 
break;
case 4: //for operations over Double 
cout<<"enter doublenumbers\n"; 
for(i=0;i<n;i++)
cin>>d[i]; 
maxmin(d,n); 
break;
default:
cout<<"Invalid choice entered...";
}
return 0;
}
