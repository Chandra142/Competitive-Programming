#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *head[5];

vector<int> graph[5];
void addEdge(int u, int v)
{
    graph[u].push_back(v);
}
// traversing by dfs
void dfs(int s, bool vis[])
{
    vis[s] = true;
    cout << s << " ";
    for (int i = 0; i < graph[s].size(); i++)
    {
        int v = graph[s][i];
        if (vis[v] == false)
        {
            dfs(v, vis);
        }
    }
}

int main()
{
    // Build the graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(3, 4);

    // DFS traversal starting from node 0
    bool vis[5] = {false};
    cout << "DFS Traversal: ";
    dfs(0, vis);
    cout << endl;
    return 0;
}
