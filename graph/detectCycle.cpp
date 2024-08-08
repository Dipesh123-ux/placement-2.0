#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<int> *l;    

    public:
    Graph(int v){
        this->v = v;
        l = new list<int> [v];

    }

    void addEdge(int x , int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool cycle_helper(int node , bool *visited,int parent){

        visited[node] = true;
        for(int i : l[node]){
            if(!visited[i]){
              bool cycle_found = cycle_helper(i,visited,node);
              if(cycle_found){
                  return true;
              }
            }
            else if(i != parent){
                return true;
            }
        }

        return false;
    }

    bool contains_cycle(){
        bool *visited = new bool[v];

        for(int i =0; i <v; i++)
        {
            visited[i] = false;
        }

     
        return  cycle_helper(0, visited,-1);
        
        

    }
};

int main(){
   Graph g(5);

   g.addEdge(0,1);
   g.addEdge(1,2);
   g.addEdge(2,3);
   g.addEdge(3,4);
//    g.addEdge(4,0);

   cout<<g.contains_cycle();
}