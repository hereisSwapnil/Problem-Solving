class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Bruteforce Approach
        // int sum = 0;
        // int count = 0;
        // int n = nums.size();
        // for(int i = 0; i<n; i++){
        //     sum = 0;
        //     for(int j = i; j<n; j++){
        //         sum += nums[j];
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        // }
        // return count;


        // Optimised Approach
        int sum = 0;
        int n = nums.size();
        int preSum = 0;
        int count = 0;
        map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i<n; i++){
            preSum += nums[i];
            int remove = preSum - k;
            count += mp[remove];
            mp[preSum] += 1;
        }
        return count;
    }
};