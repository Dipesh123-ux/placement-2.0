#include<bits/stdc++.h>
using namespace std;

class Graph{
    vector<pair<int, int> > *l;
    int v;
    public:
    Graph(int v){
        this->v = v;
        l = new vector<pair<int, int> > [v];
    }

    void addEdge(int x ,int y,int w) {
        l[x].push_back(make_pair(y,w));
        l[y].push_back(make_pair(x,w));
    }

    int prim_mst(){
        // min heap
        priority_queue<pair<int, int> , vector<pair<int, int> > , greater<pair<int, int> > > Q;

        // visited array that denotes whether a node has been included in mst 
        bool *visited = new bool[v]{0};
        int ans = 0;
      
       Q.push({0,0}); // weight , node // first key is used for comparison 

       while(!Q.empty()){

           // pick out the element with min weight
           auto best = Q.top();
           Q.pop(); 

           int to = best.second;
           int weight = best.first;

           if(visited[to]){
               continue;
           }

           ans += weight;

           visited[to] = 1;

           for(auto x : l[to]){
               if(visited[x.first] == 0){
                   Q.push({x.second,x.first});
               }
           }

      


       }

        return ans;



    }
};

int main(){

    Graph g(4);

    g.addEdge(0,1,1);
    g.addEdge(0,3,2);
    g.addEdge(0,2,2);
    g.addEdge(1,2,2);
    g.addEdge(1,3,3);
    g.addEdge(2,3,3);

    cout<<g.prim_mst();

}