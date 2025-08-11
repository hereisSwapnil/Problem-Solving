class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int gap = matrix[0].size();
        int i = 0;
        bool found = false;
        while(!found){
            if(matrix[i][0] <= target && target <= matrix[i][gap-1]){
                found = true;
                break;
            }
            i++;
            if(i>=n){
                return false;
            }
        }
        cout<<i<<endl;
        vector<int> nums = matrix[i];
        int left = 0;
        int right = gap - 1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[mid]>=target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return false;
    }
};