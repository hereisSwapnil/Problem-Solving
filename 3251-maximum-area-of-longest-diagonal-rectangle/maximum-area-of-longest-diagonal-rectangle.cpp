class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagSq = 0;
        int maxArea = 0;

        for (auto &dim : dimensions) {
            int l = dim[0], w = dim[1];
            long long diagSq = 1LL * l * l + 1LL * w * w;
            int area = l * w;

            if (diagSq > maxDiagSq || (diagSq == maxDiagSq && area > maxArea)) {
                maxDiagSq = diagSq;
                maxArea = area;
            }
        }

        return maxArea;
    }
};