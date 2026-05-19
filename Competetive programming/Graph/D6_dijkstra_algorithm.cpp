#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int numIslands(vector<vector<char>> &grid){
        int islandCount = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i = 0;i <n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(i,j,vis,grid,n,m);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }

};

int main() {
    Solution obj;

    
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    int result = obj.numIslands(grid);

    cout << "Number of Islands: " << result << endl;

    return 0;
}