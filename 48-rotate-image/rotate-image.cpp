class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // bruteforce approach is
        // i, j -> j, n-1-i

        // optimised approach

        // first take transpose
        for(int i = 0; i<matrix.size(); i++){
            for(int j = i+1; j<matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // now reverse everyrow
        for(int i = 0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};