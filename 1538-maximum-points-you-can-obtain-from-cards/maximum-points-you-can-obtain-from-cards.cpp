class Solution {
public:
    // Naive Solution
    // int maxScore(vector<int>& cardPoints, int k) {
    //     int l = k;
    //     int r = 0;
    //     int n = cardPoints.size();
    //     int maxSum = 0;
    //     while(r<=k){
    //         int sum = 0;
    //         for(int i = 0; i<l; i++){
    //             sum += cardPoints[i];
    //         }

    //         for(int i = n-r; i<n; i++){
    //             sum += cardPoints[i];
    //         }

    //         maxSum = max(maxSum, sum);
    //         r++;
    //         l--;
    //     }
    //     return maxSum;
    // }

    // Optimal Solution
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = k-1;
        int r = n-1;
        int maxSum = 0;
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum += cardPoints[i];
        }
        maxSum = sum;
        while(l>=0){
            sum -= cardPoints[l];
            sum += cardPoints[r];
            l--;
            r--;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};