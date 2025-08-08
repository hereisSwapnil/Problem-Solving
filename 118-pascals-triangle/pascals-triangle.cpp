class Solution {
public:
    int nCr(int n, int r)
    {
        long long res = 1;
        if (r > n - r) r = n - r;
        for (int i = 0; i < r; i++) {
            res = res * (n - i) / (i + 1);
        }
        return (int) res;
    }
    vector<vector<int>> generate(int numRows) {
        // bruteforce
        vector<vector<int>> res;
        for(int n = 1; n<=numRows; n++){
            vector<int> v(n);
            for(int r = 1; r<=n; r++){
                v[r-1] = nCr(n-1, r-1);
            }
            res.push_back(v);
        }
        return res;
    }
};