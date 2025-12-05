class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int i: arr){
            mp[i]++;
        }

        unordered_set<int> ss;
        for(auto i: mp){
            if(ss.find(i.second) != ss.end()){
                return false;
            }
            ss.insert(i.second);
        }
        return true;
    }
};