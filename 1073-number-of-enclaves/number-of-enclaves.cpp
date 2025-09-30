class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& grid, int n, int m){
        vis[i][j] = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for(int k = 0; k<4; k++){
            int row = i + delrow[k];
            int col = j + delcol[k];

            if(row>=0 && col>=0 && row<n && col<m && vis[row][col] == 0 && grid[row][col] == 1){
                dfs(row, col, vis, grid, n, m);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i = 0; i<n; i++){
            if(vis[i][0] == 0 && grid[i][0] == 1){
                dfs(i, 0, vis, grid, n, m);
            }
        }
        for(int i = 0; i<n; i++){
            if(vis[i][m-1] == 0 && grid[i][m-1] == 1){
                dfs(i, m-1, vis, grid, n, m);
            }
        }
        for(int i = 0; i<m; i++){
            if(vis[0][i] == 0 && grid[0][i] == 1){
                dfs(0, i, vis, grid, n, m);
            }
        }
        for(int i = 0; i<m; i++){
            if(vis[n-1][i] == 0 && grid[n-1][i] == 1){
                dfs(n-1, i, vis, grid, n, m);
            }
        }

        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(vis[i][j] == 0 && grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};