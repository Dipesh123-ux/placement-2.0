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

    void singleSourecShortestPath(T src){
        map<T,int> dist;
        queue<T> q; 

        for(auto pair : l){
            T node = pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src] = 0;

        while(!q.empty()){
            T node = q.front();
              q.pop();


            for(int i : l[node])
            {
                if(dist[i] == INT_MAX){

                    q.push(i);
                    dist[i]= dist[node] + 1;

                }
            }
        }

        for(auto pair : l){
            T node = pair.first;
            int d = dist[node];
            cout<<"Node "<<node<<" distance from src is "<<d<<endl;
        }

    }
};

int main(){

    Graph<int> g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(4,5);


    g.singleSourecShortestPath(0);
}