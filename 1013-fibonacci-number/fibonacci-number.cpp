class Solution {
public:
    vector<int> dp;
    // Using Dynamic Programming DP
    int rec(int n){
        if(n <= 1) return n;

        if(dp[n] != -1) return dp[n];
        else{
            return dp[n] = rec(n-1) + rec(n-2);
        }
    }
    int fib(int n) {
        dp.assign(n+1, -1);
        return rec(n);
    }
};