#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list <int> *l;
    public:
    Graph(int v){
        this ->v =v;
        l = new list<int> [v];

    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // void dfshelper(int u, vector<bool> &vis){
    //     cout<<u<<" ";
    //     vis[u] = true;
    //     for(int v : l[u]){
    //         if(!vis[v]){
    //             dfshelper(v,vis);
    //         }
    //     }
    // }
    // void dfs(){
    //     int src = 0;
    //     vector<bool> vis(v,false);
    //     dfshelper(src,vis);
    // }
    bool isCycleUndirDFS(int src, int par, vector<bool> &vis){
        vis[src] = true;
        list<int> neighbors = l[src];
        for(int v : neighbors){
            if(!vis[v]){
                if(isCycleUndirDFS(v,src,vis)){
                    return true;
                }
            }
            else if(v!= par){
                return true;
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(v,false);
        for(int i = 0; i<v; i++){
            if(!vis[i]){
                if(isCycleUndirDFS(i, -1, vis)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(0,4);
    g.addEdge(4,3);
    cout<<endl;
    if(g.isCycle()){
        cout<<"Yes, CYCLE exist in the group;\n";
        
    }
    else{
        cout<<"No, CYCLE exist in the grpah;\n";

    }
    return 0;
    

}