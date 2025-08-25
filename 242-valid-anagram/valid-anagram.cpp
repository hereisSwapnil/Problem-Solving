class Solution {
public:
    // using map
    // bool isAnagram(string s, string t) {
    //     unordered_map<char, int> mp;
    //     for(char a: s){
    //         mp[a]++;
    //     }
    //     for(char a: t){
    //         mp[a]--;
    //     }
    //     for(auto a: mp){
    //         if(a.second>0 || a.second<0) return false;
    //     }
    //     return true;
    // }
    // // using sorting
    // bool isAnagram(string s, string t) {
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     return s == t;
    // }

    // using character array
    bool isAnagram(string s, string t) {        
        if (s.size() != t.size()) return false;
        
        vector<int> count(26, 0);
        for (char x : s) {
            count[x - 'a']++;
        }
        for (char x : t) {
            count[x - 'a']--;
        }
        for (int val : count) {
            if (val != 0) return false;
        }
        return true;
    }
};