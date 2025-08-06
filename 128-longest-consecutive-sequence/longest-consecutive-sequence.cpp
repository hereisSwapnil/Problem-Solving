class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        if(n == 0 || n == 1){
            return n;
        }

        int currL = 1;
        int maxL = 1;
        for(int i = 0; i<n-1; i++){
            if(nums[i]+1 == nums[i+1]){
                currL++;
                maxL = max(maxL, currL);
            }else if(nums[i] == nums[i+1]){
                continue;
            }
            else{
                currL = 1;
            }
        }
        return maxL;
    }
};