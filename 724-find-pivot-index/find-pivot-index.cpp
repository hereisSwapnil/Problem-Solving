class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s = 0;
        int sum = 0;

        for(int i: nums){
            sum+=i;
        }

        for(int i = 0; i<nums.size(); i++){

            if(sum-s-nums[i] == s){
                return i;
            }
            s+=nums[i];
        }
        return -1;
    }
};