class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<char>>& board, int n, int m){
        vis[i][j] = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for(int k = 0; k<4; k++){
            int row = i + delrow[k];
            int col = j + delcol[k];

            if(row>=0 && col>=0 && row<n && col<m && vis[row][col] == 0 && board[row][col] == 'O'){
                dfs(row, col, vis, board, n, m);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis (n, vector<int>(m, 0));

        for(int i = 0; i<n; i++){
            if(vis[i][0] == 0 && board[i][0] == 'O'){
                dfs(i, 0, vis, board, n, m);
            }
        }
        for(int i = 0; i<n; i++){
            if(vis[i][m-1] == 0 && board[i][m-1] == 'O'){
                dfs(i, m-1, vis, board, n, m);
            }
        }
        for(int i = 0; i<m; i++){
            if(vis[0][i] == 0 && board[0][i] == 'O'){
                dfs(0, i, vis, board, n, m);
            }
        }
        for(int i = 0; i<m; i++){
            if(vis[n-1][i] == 0 && board[n-1][i] == 'O'){
                dfs(n-1, i, vis, board, n, m);
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(vis[i][j] == 0 && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};