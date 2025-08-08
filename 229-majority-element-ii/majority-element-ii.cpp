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
        // map<int, int> mp;
        // int n = nums.size();
        // vector<int> res;
        // for(int i = 0; i<n; i++){
        //     if(res.size() == 2){
        //         return res;
        //     }
        //     int num = nums[i];
        //     if(res.size() > 0 && res[0] == num ||
        //     res.size() > 1 && res[1] == num){
        //         continue;
        //     }
        //     int count = mp[num];
        //     if(count+1 > n/3){
        //         res.push_back(num);
        //     }
        //     mp[num] += 1;
        // }
        // return res;

        
        // Best solution
        int n = nums.size();
        int ans1 = 0;
        int count1 = 0;
        int ans2 = 0;
        int count2 = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == ans1){
                count1++;
            }else if(nums[i] == ans2){
                count2++;
            }else if(count1 == 0){
                ans1 = nums[i];
                count1++;
            }else if(count2 == 0){
                ans2 = nums[i];
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == ans1) count1++;
            else if (num == ans2) count2++;
        }

        vector<int> res;
        if (count1 > n / 3) res.push_back(ans1);
        if (count2 > n / 3) res.push_back(ans2);

        return res;
    }
};