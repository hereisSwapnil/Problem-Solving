class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int j = 0;
            while(j<nums.size()-1-i){
                if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
                j++;
            }
            for(int i: nums){
                cout << i << " ";
            }
            cout << endl;
        }
    }
};