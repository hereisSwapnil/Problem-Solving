class Solution {
public:
    // Using Dynamic Programming DP
    // vector<int> dp;
    // int rec(int n){
    //     if(n <= 1) return n;

    //     if(dp[n] != -1) return dp[n];
    //     else{
    //         return dp[n] = rec(n-1) + rec(n-2);
    //     }
    // }
    // int fib(int n) {
    //     dp.assign(n+1, -1);
    //     return rec(n);
    // }
    int fib(int n) {
        if(n<=1) return n;
        int prevv = 0;
        int prev = 1;
        for(int i = 2; i<=n; i++){
            int temp = prev+prevv;
            prevv = prev;
            prev = temp;
        }
        return prev;
    }
};