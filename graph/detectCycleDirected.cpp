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

    bool cycle_helper(int node , bool *visited,bool *stack){
        visited[node] = true;
        stack[node] = true;

        for(int i : l[node]){
            if(stack[i]==true){
                return true;
            }
            else if(visited[i] == false){
                bool cycle_found = cycle_helper(i,visited,stack);
                if(cycle_found){
                    return true;
                }
            }
        }

        stack[node] = false;
        return false;
    }

     bool contains_cycle(){
         bool *visited = new bool[v];
         bool *stack = new bool[v];

         for(int i =0; i <v; i++){
             visited[i] = stack[i] = false;
         }

         return cycle_helper(0,visited,stack);
     }
   

};

int main(){
      
      Graph g(7);

     
      g.addEdge(0,1);
      g.addEdge(1,2);
      g.addEdge(2,3);
      g.addEdge(3,4);
      g.addEdge(4,5);
      g.addEdge(1,5);
      g.addEdge(5,6);
      g.addEdge(4,2);

      if(g.contains_cycle()){
          cout<<"cycle found in the graph"<<endl;
      }
      else{
          cout<<"cycle not found in the graph"<<endl;
      }



}