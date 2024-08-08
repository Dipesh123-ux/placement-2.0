#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;

    public : 
    void addEdge(int x  , int y){
    // assuming bidirectional edges
        l[x].push_back(y);
        l[y].push_back(x);
    }

    int dfs_helper(T src , map<T,bool> &visited,int c){

     // recursive function that will traverse the graph

        visited[src]=true;
        c = 1;

        // go to all the nbrs of that node that is not visited
        for(T nbr : l[src]){
           if(!visited[nbr]){
             
             c += dfs_helper(nbr,visited,c);
             
           }
        }
    
     return c;

    }

    void dfs(){
          
         map<T,bool> visited;

         for(auto pair : l){
             T node = pair.first;
             visited[node] = false;
         } 

        for(auto pair : l){
            T node = pair.first;
            if(!visited[node]){
              int c = 0; 
            cout<<dfs_helper(node,visited,c)<<" ";
            }
        }
          
     

    }

};

int main(){

    Graph<int> g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(0,4);

    g.addEdge(5,6);
    g.addEdge(6,7);


    g.dfs();
}