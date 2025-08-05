class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0, currentLen = 0;
        for(int num : nums) {
            if(num == 1) {
                currentLen++;
                maxLen = max(maxLen, currentLen);
            } else {
                currentLen = 0;
            }
        }
        return maxLen;
    }
};