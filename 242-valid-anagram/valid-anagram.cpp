class Solution {
public:
    // using map
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(char a: s){
            mp[a]++;
        }
        for(char a: t){
            mp[a]--;
        }
        for(auto a: mp){
            if(a.second>0 || a.second<0) return false;
        }
        return true;
    }
};