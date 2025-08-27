class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        int maxL = 0;
        while(j<n){
            if(nums[j] == 0) count++;
            if(count>k){
                if(nums[i] == 0) count--;
                i++;
            }
            maxL = max(maxL, j-i+1);
            j++;
        }
        return maxL;
    }
};