class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(nums);
        int sum = 1;
        for(int i = 0; i<n-1; i++){
            sum *= nums[i];
            res[i+1] = sum;
        }
        res[0] = 1;
        sum = 1;
        for(int i = n-1; i>0; i--){
            sum *= nums[i];
            res[i-1] = res[i-1]*sum;
        }
        return res;
    }
};