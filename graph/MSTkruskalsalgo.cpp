#include<bits/stdc++.h>
using namespace std;

class DSU{

    int *parent;
    int *rank;

    public:
    DSU(int n){
        parent = new int[n];
        rank = new int[n];

        for(int i = 0; i <n; i++){
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    int  find_Set(int i){
        if(parent[i] == -1){
            return i;
        }

        return parent[i] =find_Set(parent[i]);
    }

    void unite(int x  , int y){
        int s1 = find_Set(x);
        int s2 = find_Set(y);
        
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

};

class Graph{

    vector<vector<int> >edgelist;
    int v;

    public:
    Graph(int v){
        this->v = v;
    }

    void addEdge(int w  , int x,int y){
        edgelist.push_back({w,x,y});
    }

    int kruskalMst(){
        sort(edgelist.begin(),edgelist.end());

        DSU s(v);

        int ans = 0;

        for(auto edge : edgelist){
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];

            if(s.find_Set(x) != s.find_Set(y)){
                s.unite(x,y);
                ans += w;
            }
        }

        return ans;


    }

};

int main(){

    Graph g(4);

    g.addEdge(1,1,2);
    g.addEdge(3,2,4);
    g.addEdge(2,2,3);
    g.addEdge(2,1,3);
    g.addEdge(3,3,4);
    g.addEdge(2,1,4);

    cout<<g.kruskalMst()<<endl;

}