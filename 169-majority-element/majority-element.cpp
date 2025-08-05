class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can = nums[0];
        int c = 0;
        for (int n: nums){
            if(c == 0){
                can = n;
            }
            if(can == n){
                c++;
            }else{
                c--;
            }
        }
        return can;
    }
};