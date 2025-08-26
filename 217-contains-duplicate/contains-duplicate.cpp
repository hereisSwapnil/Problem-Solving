class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int a: nums){
            if(us.find(a) != us.end()) return true;
            else us.insert(a);
        }
        return false;
    }
};