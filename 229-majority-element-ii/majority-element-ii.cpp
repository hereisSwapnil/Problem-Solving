class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Bruteforce approach
        // In this the maximum elements that can appear having their count more than n/3 time is only two
        // vector<int> res;
        // int n = nums.size();
        
        // for (int i = 0; i < n; i++) {
        //     // Skip if already in res
        //     if ((res.size() > 0 && res[0] == nums[i]) || 
        //         (res.size() > 1 && res[1] == nums[i])) {
        //         continue;
        //     }

        //     int count = 0;
        //     for (int j = 0; j < n; j++) {
        //         if (nums[j] == nums[i]) {
        //             count++;
        //         }
        //     }

        //     if (count > n / 3) {
        //         res.push_back(nums[i]);
        //     }
        // }

        // return res;

        // Optimised approach
        map<int, int> mp;
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i<n; i++){
            if(res.size() == 2){
                return res;
            }
            int num = nums[i];
            if(res.size() > 0 && res[0] == num ||
            res.size() > 1 && res[1] == num){
                continue;
            }
            int count = mp[num];
            if(count+1 > n/3){
                res.push_back(num);
            }
            mp[num] += 1;
        }
        return res;
    }
};