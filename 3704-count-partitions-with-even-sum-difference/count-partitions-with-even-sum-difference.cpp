class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(int i: nums){
            sum+=i;
        }
        int left = 0;
        int right = sum;

        int ans = 0;
        for(int i = 0; i<nums.size()-1; i++){
            left += nums[i];
            right -= nums[i];
            if(abs(left-right)%2 == 0){
                ans++;
            }
        }
        return ans;
    }
};