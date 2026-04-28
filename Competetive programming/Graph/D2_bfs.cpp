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
//traversing by bfs
void bfs(int s)
{
    bool vis[5] = {};
    queue<int> Q;
    Q.push(s);
    vis[s] = true;
    while (!Q.empty())
    {
        int curr = Q.front();
        Q.pop();
        cout << curr << " ";
        for (int i = 0; i < graph[curr].size(); i++)
        {
            int v = graph[curr][i];
            if (vis[v] == false)
            {
                vis[v] = true;
                Q.push(v);
            }
        }
    }
    cout << endl;
}

int main()
{
    // Build the graph
    addEdge(0, 1);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(2, 4);

    // Perform BFS traversal starting from node 0
    cout << "BFS Traversal: ";
    bfs(0);

    return 0;
}
