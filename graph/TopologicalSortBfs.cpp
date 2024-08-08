#include<bits/stdc++.h>
using namespace std;

class Graph{
    
    list<int>  *l;
    int v;

    public:

    Graph(int v){

        this->v = v;
        l = new list<int> [v];

    }

    void addEdge(int x  , int y){
        l[x].push_back(y);
    }

    void topologicalSort(){
        int *indegree = new int[v];

        for(int i =0; i <v; i++){
            indegree[i] = 0;
        }

        for(int i =0; i <v; i++){
            for(auto j : l[i]){
                indegree[j]++;
            }
        }

        queue<int> q;

        for(int i =0; i <v; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node  = q.front();
            q.pop();
            cout<<node<<" ";

            for(auto nbr : l[node]){
                indegree[nbr]--;
                if(indegree[nbr] ==0){
                    q.push(nbr);
                }
            }

        }

     
    }

};

int main(){
      
      Graph g(6);

     
      g.addEdge(0,2);
      g.addEdge(1,2);
      g.addEdge(2,3);
      g.addEdge(3,5);
      g.addEdge(2,5);
      g.addEdge(1,4);
      g.addEdge(4,5);

      g.topologicalSort();


}