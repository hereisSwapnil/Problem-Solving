class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());
        int n = v.size();
        vector<int> ans;
        if(n<k){
            k = n;
        }
        for(int i = n-1; i>=n-k; i--){
            ans.push_back(v[i]);
        }
        return ans;
    }
};