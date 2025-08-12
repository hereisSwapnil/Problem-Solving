class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(mid > 0 && nums[mid] == nums[mid-1]){
                if((mid-left+1)%2 != 0){
                    right = mid - 2;
                }else{
                    left = mid + 1;
                }
            }else if(mid < nums.size() - 1 && nums[mid] == nums[mid+1]){
                if((right-mid+1)%2 != 0){
                    left = mid + 2;
                }else{
                    right = mid - 1;
                }
            }else{
                return nums[mid];
            }
        }
        return -1;
    }
};