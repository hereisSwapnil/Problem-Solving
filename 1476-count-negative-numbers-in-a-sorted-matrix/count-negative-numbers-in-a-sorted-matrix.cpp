class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i = n-1; i>=0; i--){
            bool isNeg = false;
            for(int j = m-1; j>=0; j--){
                if(isNeg) break;
                if(grid[i][j]<0) ans++;
                else{
                    isNeg = true;
                }
            }
        }
        return ans;
    }
};