class Solution {
public:
    void zeroRow(vector<vector<int>> &matrix, int row){
        int m = matrix.size();
        for (int i = 0; i < m; i++){
            if(matrix[i][row] !=0 ){
                matrix[i][row] = 0;
            }
        }
    }

    void zeroCol(vector<vector<int>> &matrix, int col){
        int n = matrix[0].size();
        for (int i = 0; i < n; i++){
            if(matrix[col][i] !=0 ){
                matrix[col][i] = 0;
            }
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        // BruteForce Sol.
        // int m = matrix.size();
        // int n = matrix[0].size();
        // for (int i = 0; i < m; i++){
        //     for (int j = 0; j < n; j++){
        //         if(matrix[i][j] == 0){
        //             zeroRow(matrix, j);
        //             zeroCol(matrix, i);
        //         }
        //     }
        // }
        // for (int i = 0; i < m; i++){
        //     for (int j = 0; j < n; j++){
        //         if(matrix[i][j] == -1){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    
        // Better Solution
        vector<int> row;
        vector<int> col;

        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row.push_back(j);
                    col.push_back(i);
                }
            }
        }
        for (int i = 0; i<row.size(); i++){
            zeroRow(matrix, row[i]);
        }
        for (int i = 0; i<col.size(); i++){
            zeroCol(matrix, col[i]);
        }
    }
};