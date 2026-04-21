#include<bits/stdc++.h>
using namespace std;

addEdge(int v,int u){
    graph[u][v] = 1;
    graph[v][u] = 1;
}