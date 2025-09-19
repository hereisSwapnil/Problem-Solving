class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& image, int n, int m, int oldColor, int newColor){
        if(i<0 || j<0 || i>=n || j>=m || image[i][j] != oldColor){
            return;
        }
        image[i][j] = newColor;
        dfs(i+1, j, image, n, m, oldColor, newColor);
        dfs(i-1, j, image, n, m, oldColor, newColor);
        dfs(i, j+1, image, n, m, oldColor, newColor);
        dfs(i, j-1, image, n, m, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int oldColor = image[sr][sc];

        if(oldColor == color) return image;
        
        dfs(sr, sc, image, n, m, oldColor, color);
        return image;
    }
};