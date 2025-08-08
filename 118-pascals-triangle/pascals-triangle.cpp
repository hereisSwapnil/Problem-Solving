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
        // vector<vector<int>> res;
        // for(int n = 1; n<=numRows; n++){
        //     vector<int> v(n);
        //     for(int r = 1; r<=n; r++){
        //         v[r-1] = nCr(n-1, r-1);
        //     }
        //     res.push_back(v);
        // }
        // return res;

        // Optimised Version

        vector<vector<int>> res;
        for(int n = 0; n<numRows; n++){
            vector<int> v(n+1);
            v[0] = 1;
            int val = 1;
            int num = n;
            int den = 1;
            for(int r = 1; r<=n; r++){
                val = (val * num) / den;
                v[r] = val;
                num--;
                den++;
            }
            res.push_back(v);
        }
        return res;
    }
};