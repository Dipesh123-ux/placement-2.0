#include<bits/stdc++.h>
using namespace std;

// template<typename T>
class Graph{
    map<int,list<pair<int,int>>> l;

    public : 
    void addEdge(int x  , int y,int w){
    // assuming bidirectional edges
        l[x].push_back(make_pair(y,w));
        l[y].push_back(make_pair(x,w));
    }

    void dfs_helper(int src , map<int,bool> &visited,int &count){

     // recursive function that will traverse the graph
        
        visited[src]=true;
        list<pair<int,int> > j = l[src];
        for(auto nbr : j){
            count = min(count,nbr.second);
        }

        // go to all the nbrs of that node that is not visited
        for(auto nbr : l[src]){
           if(!visited[nbr.first]){
             dfs_helper(nbr.first,visited,count);
           }
        }

    }

    void dfs(){
          
         map<int,bool> visited;

         for(auto pair : l){
             int node = pair.first;
             visited[node] = false;
         } 

         int count = INT_MAX;


        for(auto pair : l){
            int node = pair.first;
            if(!visited[node]){
            dfs_helper(node,visited,count);
            count = INT_MAX;
            }
        }

    }

};

int main(){

    Graph g;

    g.addEdge(1,2,2);
    g.addEdge(1,3,4);
    g.addEdge(3,4,7);

    g.dfs();
}