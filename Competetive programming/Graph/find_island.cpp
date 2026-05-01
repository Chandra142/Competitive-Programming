#include <bits/stdc++.h>
using namespace std;

const int m = 6;
const int n = 6;

int matrix[m][n] = {
    {1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 1},
    {1, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0},
    {1, 0, 1, 0, 1, 0},
    {1, 1, 0, 0, 0, 0}};

int dfs(int i, int j)
{
    if (i < 0 || j < 0 || i >= m || j >= n || matrix[i][j] != 1)
    {
        return 0;
    }

    matrix[i][j] = 2;

    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);

    return 1;
}

int main()
{
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count += dfs(i, j);
        }
    }

    cout << "Number of islands: " << count << '\n';
    return 0;
}