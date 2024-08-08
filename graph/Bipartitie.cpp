#include<bits/stdc++.h>
using namespace std;

dfs_helper(vector<int> graph[],int node , int parent , int visited[],int color){
    visited[node] = color; // 0 if not visited, 1 for first color visited , 2 for second color visited 
    for(int i : graph[node]){
         if(visited[i] == 0){
             bool color_chnage = dfs_helper(graph,i,node,visited,3-color);
             if(!color_chnage){
                 return false;
             }
         }
         else if(i != parent and visited[i] == color){
             return false;
         }


    }

    return true;
}

bool dfs(vector<int> graph[],int N){
    int visited[N] = {0};
    int color = 1;
    int ans = dfs_helper(graph, 0,-1, visited, color);
    return ans;

}

int main(){

    int N, M;
    cin>>N>>M;

    vector<int> graph[N];

    while(M--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    cout<<dfs(graph,N);

}