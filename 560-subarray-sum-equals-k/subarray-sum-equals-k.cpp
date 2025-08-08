class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> preS(n);
        int count = 0;
        int sum = 0;

        for(int i = 0; i<n; i++){
            sum += nums[i];
            preS[i] = sum;
        }

        for(int i = 0; i<n; i++){
           if(preS[i] == k){
                count++;
           }
           for(int j = i+1; j<n; j++){
                if(preS[j]-preS[i] == k){
                    count++;
                }
           }
        }

        return count;
    }
};