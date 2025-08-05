class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can = nums[0];
        int c = 0;
        for (int i = 0; i< nums.size(); i++){
            if(c == 0){
                can = nums[i];
            }
            if(can == nums[i]){
                c++;
            }else{
                c--;
            }
        }
        return can;
    }
};