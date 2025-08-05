class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++){
            int num = nums[i];
            int j = i;
            while (j>=1 && nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j - 1]);
                j--;
            }
        }
    }
};