#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<pair<int, int>> l;
    
    public:
       Graph(int v){
           this->v = v;
       }

       void addEdge(int x , int y){
           l.push_back(make_pair(x,y));
       }

       // DSU functions
       // Find compression

       int findSet(int i,int parent[]){
           if(parent[i] == -1){
               return i;
           }

           return  parent[i] = findSet(parent[i],parent);
       }

       // union by rank

       void union_Set(int x , int y,int parent[],int rank[]){
            int s1 = findSet(x,parent);
            int s2 = findSet(y,parent);

            if(s1 != s2){
                if(rank[s1] < rank[s2]){
                    parent[s1] = s2;
                    rank[s2] += rank[s1];
                }
                else{
                    parent[s2] = s1;
                    rank[s1] += rank[s2];
                }
            }
       }

       bool contains_cycle(){
           // DSU logic to implement this function

           int *parent = new int[v];
           int *rank = new int[v];

           for(int i =0; i <v; i++)
           {
               parent[i] = -1;
               rank[i] = 1;
           }

           for(auto edge : l){
               int i = edge.first;
               int j = edge.second;

               int s1 = findSet(i,parent);
               int s2 = findSet(j,parent);

               if(s1 != s2){
                   union_Set(s1,s2,parent,rank);
               }
               else{
                   return true;
               }
           }
            
            delete [] parent;
            return false;


       }





    };

int main(){
      Graph g(4);

      g.addEdge(0,1);
      g.addEdge(1,2);
      g.addEdge(2,3);
      g.addEdge(3,0);

       cout<<g.contains_cycle();
}