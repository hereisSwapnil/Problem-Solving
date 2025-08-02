class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxP = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                int a = nums[i];
                int b = nums[j];
                if(abs(a-b) <= min(a, b)){
                    maxP = max(maxP, a^b);
                }
            }
        }
        return maxP;
    }
};