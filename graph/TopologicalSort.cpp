#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;

    public:
    void addEdge(T x,T y){
        l[x].push_back(y);
    }

    void dfs_helper(T node, map<T,bool> &visited,list<T> &ordering){
        visited[node] = true;

        for(T nbr : l[node]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
            }
        }

        ordering.push_front(node);
        return;
    }

        void dfs(){
     
         map<T,bool> visited;
         list<T> ordering;

         for(auto pair : l){
             T node = pair.first;
             visited[node] = false;
         } 

        for(auto pair : l){
            T node = pair.first;
            if(!visited[node]){
                dfs_helper(node,visited,ordering);
            }
        }

        for(T i : ordering){
            cout<<i<<" ";
        }
}
};

int main(){
    Graph<string> g;

    g.addEdge("python","dataPreprocessing");
    g.addEdge("python","pyTorch");
    g.addEdge("python","ML");
    g.addEdge("dataPreprocessing","ML");
    g.addEdge("pyTorch","DL");
    g.addEdge("ML","DL");
    g.addEdge("DL","faceRecog");
    g.addEdge("dataSet","faceRecog");

    g.dfs();
}