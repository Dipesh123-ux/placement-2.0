#include<bits/stdc++.h>
using namespace std;

class Graph{
    map<int,list<int>>l;
    public:
     void addEdge(int x , int y){
        l[x].push_back(y);
        l[y].push_back(x);
      }
     
     void bfs(int src){
        map<int,bool> visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";
            for(auto nbr : l[node]){
                if(visited[nbr] == false){
                   q.push(nbr);
                   visited[nbr] = true;
                }
            }
        }

     }

     void dfs_helper(int src,map<int,int> & visited){
         cout<<src<<" ";
         visited[src] = true;
         for(auto nbr : l[src]){
            if(visited[nbr] == false){
                dfs_helper(nbr,visited);
            }
         }
     }

     void dfs(int src){
        map<int,int> visited;
        dfs_helper(src,visited);
     }      
};

int main(){
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    // g.bfs(5);
    g.dfs(5);

}