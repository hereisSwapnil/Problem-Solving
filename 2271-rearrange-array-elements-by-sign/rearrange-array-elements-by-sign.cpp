class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int ni = nums.size();
        int p =0;
        int n = 1;
        vector<int>ans(ni,0);
        for(int i =0;i<ni;i++){
            if(nums[i]<0){
                ans[n] = nums[i];
                n += 2;
            }
            else{
                ans[p]=nums[i];
                p+=2;
            }
        }
        return ans;
    }
};