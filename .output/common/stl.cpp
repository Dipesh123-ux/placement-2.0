#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{

    for(int i = 0; i< v.size();i++)
    {
        cout<<v[i]<<" ";
    }

     cout<<endl;
}
void print2(vector<pair<int,int> > v)
{

    for(int i = 0; i< v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

     
}

int main  ()
{
  /*  pair<int , string> p;
    p = make_pair(2 , "hello");
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , int> p_array[4];
    p_array[0] = {1 ,2};
    p_array[1] = {3 ,4};
    p_array[2] = {5 ,6};
    p_array[3] = {7 ,8};
    swap(p_array[0] , p_array[3]);  // works on both the pairs

    for(int i = 0; i< 4;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

// for taking inputs
pair<int , int > p;
cin>>p.first>>p.second;
cout<<p.first<<" "<<p.second<<endl;



// vectos = array of dynamic size 

 vector<int> v;
 int n; 
 cin>>n;
 for(int i= 0; i < n; i++)
 {
     int x;
     cin>>x;
     v.push_back(x);
 }

print(v);
vector<int> v2 = v; //v2 copies elements of v

print(v2);



vector<pair<int , int> > v = {{1,2} , {2,3} , {4 ,5}};
print2(v);

//user input vector pair

vector<pair<int,int> > v1;
int n;
cin>>n;

for(int i =0 ; i< n; i++)
{
    int x , y;
    cin>>x>>y;
    v1.push_back({x , y});
}

print2(v1);



// array of vectors
int N;
cin>>N;
vector<int> v[N];  // n vectors of size zero
 for(int i = 0 ; i < N; i++)
 {
    int n;
    cin>>n;  // input size of a vector  
    for(int j = 0; j<n;j++)
    {
        int x;
        cin>>x;
        v[i].push_back(x);
    }
 }

 for(int i = 0; i < N; i++)
 {
     print(v[i]);
 }

 

// vector of vectors

vector<vector<int> > v;
int N;
cin>>N;

for(int i = 0; i< N; i++)
{
    int n; 
    cin>>n;

    vector<int> temp;
    for(int j = 0; j< n; j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }

    v.push_back(temp);
}


for(int i = 0; i < N; i++)
{
    print(v[i]);
}

cout<<v[0][1];

*/

// pairs 



} 
