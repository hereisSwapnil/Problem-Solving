class Solution {
public:
    void zeroRow(vector<vector<int>>& matrix, int row){
        for(int i = 0; i<matrix[0].size(); i++){
            matrix[row][i] = 0;
        }
    }
    void zeroCol(vector<vector<int>>& matrix, int col){
        for(int i = 0; i<matrix.size(); i++){
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    col.push_back(j);
                    row.push_back(i);
                }
            }
        }

        for(int i: row){
            zeroRow(matrix, i);
        }
        for(int i: col){
            zeroCol(matrix, i);
        }
    }
};