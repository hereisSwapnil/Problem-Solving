class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 0;

        for(int i = 0; i<nums.size(); i++){
            if(i == nums.size() - 1){
                nums[a] = nums[i];
                a++;
                continue;
            }
            if(nums[i] != nums[i+1]){
                nums[a] = nums[i];
                a++;
            }
        }
        return a;
    }
};