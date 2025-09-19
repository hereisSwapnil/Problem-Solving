class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& image, vector<vector<bool>>& vis, int n, int m, int newColor, int oldColor){
        if(i<0 || j<0 || i>=n || j>=m || image[i][j] != newColor || vis[i][j]){
            return;
        }
        image[i][j] = oldColor;
        vis[i][j] = true;
        dfs(i+1, j, image, vis, n, m, newColor, oldColor);
        dfs(i-1, j, image, vis, n, m, newColor, oldColor);
        dfs(i, j+1, image, vis, n, m, newColor, oldColor);
        dfs(i, j-1, image, vis, n, m, newColor, oldColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>> vis(n, vector<bool> (m, false));
        int newColor = image[sr][sc];
        dfs(sr, sc, image, vis, n, m, newColor, color);
        return image;
    }
};