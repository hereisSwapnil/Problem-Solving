class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        for(int a: nums1){
            mp1[a]++;
        }
        vector<int> res;
        for(int a: nums2){
            if(mp1[a] > 0){
                mp1[a]--;
                res.push_back(a);
            }
        }
        return res;
    }
};