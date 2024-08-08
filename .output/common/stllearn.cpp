#include <bits/stdc++.h>
using namespace std;

int main ()
{
/*    
  // array
  
  array<int,5> a = {1 , 2, 3, 4, 5};

  int size = a.size();
  cout<<size<<endl;  // size of array
  cout<<a.at(3)<<endl; // index element
  cout<<a.empty()<<endl; //boolean gives wheather the array is empty or not 
  cout<<a.front()<<endl; //gives front element of array
  cout<<a.back()<<endl; //gives last element of array

  
 
 // vectors
// dynamical array which double its size when it fully fills
  vector<int> v;
  cout<<v.capacity()<<endl; //initial capacity of vector i. e. space available
  cout<<v.size()<<endl;   //space filled 
  v.push_back(1);  // adding a element 
  cout<<v.capacity()<<endl;
  v.push_back(2);  // adding a element 
  cout<<v.capacity()<<endl;
  cout<<"double its size at this point"<<endl;
  v.push_back(3);  // adding a element 
  cout<<v.capacity()<<endl;
  v.push_back(4);  // adding a element 
  cout<<v.capacity()<<endl;
  cout<<"again double its size"<<endl;
  v.push_back(5); // adding a element
  cout<<v.capacity()<<endl;  

  cout<<"elements :"<<endl;
  
 for(int i : v) 
 {
      cout<<i<<" ";
 }
 cout<<endl;
 v.pop_back(); //delet last element 
 cout<<"after deleting last element"<<endl;
  for(int i : v) 
 {
      cout<<i<<" ";
 }
 cout<<endl;

 cout<<"before clearing :"<<v.size()<<endl;
 v.clear();
 cout<<"after clearing :"<<v.size()<<endl;

// size and capacity are different things size denotes the vector have any element or not but the capacity denotes the available space

cout<<v.capacity()<<endl;

vector<int> a(5 , 1); // size of vector is 5 and all elements contain one 

for(int i : a)
{
    cout<<i<<" ";    
}
cout<<endl<<"copied elements from a : ";
vector<int> b(a); //  b copies all elements of a

for(int i : b)
{
    cout<<i<<" ";
}



// doubly ended queue


deque<int> d;

d.push_back(1);
d.push_front(2);
//d.pop_back();
//d.pop_front();
for(int i : d)
{
    cout<<i<<" ";
}
int i = 2;
cout<<endl;
cout<<"before erase :"<<d.size()<<endl;
d.erase(d.begin() , d.begin() + i); // here i = 1 so it deletes one element
cout<<"after erase :"<<d.size()<<endl;
for(int i : d)
{
    cout<<i<<" ";
}



// list

list<int> l;

l.push_back(1);
l.push_front(2);

for(int i : l)
{
    cout<<i<<" ";
}
cout<<endl;
l.erase(l.begin()); 
cout<<"after erase :";
for(int i : l)
{
    cout<<i<<" ";
}
cout<<endl;
list<int> b(5,100);
for(int i : b)
{
    cout<<i<<" ";
}

// stacks

stack<string> s;

s.push("dipesh");
s.push("jaswani");

cout<<"top element of stack : "<<s.top()<<endl;
s.pop();
cout<<"top element of stack : "<<s.top()<<endl;
cout<<s.size()<<endl;


// queue

queue<string> q;

q.push("dipesh");
q.push("jaswani");

cout<<"size before pop :"<<q.size()<<endl;

cout<<q.front()<<endl;
q.pop();
cout<<"after pop"<<endl;
cout<<q.front()<<endl;

cout<<"size after pop : "<<q.size()<<endl;
*/

 // pairs 

// pair<string,int> p = {"dip",28}; // a pair of two integers
// cout<<p.first<<" "<<p.second<<endl;

// pair<int,pair<string,int>> q; //a pair of int and (pair of int and string)

// pair<vector<int>,string> r;

// sorting arrays / vectors of pairs 

// pair<int,int> p[5]; // an array of 5 pairs 

// p[0] ={1,2};
// p[1] ={5,2};
// p[2] ={8,1};
// p[3] ={1,0};
// p[4] ={3,4};

// sort(p, p + 5); 

// for(int i = 0; i < 5; i++) {
//     cout <<p[i].first << " "<< p[i].second << endl;
// }


// iterators 

// iterators behave like pointers 

// vector<int> v  = {10 , 15 , 12 , 5 , 20};

// auto it = v.begin(); // iterator to the first element 

// cout<<*it<<endl;
// it++;
// cout<<*it<<endl;
// it--;
// cout<<*it<<endl; 
// cout<<*(it + 3)<<endl;  


// set 

// set is a container which keeps a unique copy of every element in sorted order 

set <int> s;

s.insert(10); // log(n) time complexity  









}

