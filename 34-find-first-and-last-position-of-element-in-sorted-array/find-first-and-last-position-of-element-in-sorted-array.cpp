class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return {-1, -1};
        
        int left = 0;
        int right = n-1;

        int mid = 0;
        int first = -1;

        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]>=target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
            if (nums[mid] == target) first = mid;
        }

        if(first == -1) return {-1, -1};

        left = 0;
        right = n-1;
        mid = 0;
        int second = -1;

        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]>target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
            if (nums[mid] == target) second = mid;
        }

        return {first, second};
    }
};